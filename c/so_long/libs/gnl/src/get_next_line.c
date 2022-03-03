/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cskipjac <cskipjac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:55:02 by kwarpath          #+#    #+#             */
/*   Updated: 2021/11/21 17:12:47 by cskipjac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	retn(char *arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (-1);
	while (arr[i])
	{
		if (arr[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static char	*get_line(char **str)
{
	char	*txt;
	char	*line;

	if (retn(*str) == -1)
	{
		line = ft_substr(*str, 0, ft_strlen(*str));
		free(*str);
		*str = NULL;
	}
	else
	{
		line = ft_substr(*str, 0, retn(*str) + 1);
		txt = ft_substr(*str, retn(*str) + 1, ft_strlen(*str));
		free(*str);
		*str = NULL;
		*str = ft_strdup(txt);
		free(txt);
		txt = NULL;
	}
	return (line);
}

static char	*rd_buffer(char **str, char *buffer, int fd)
{
	int		ret;
	char	*txt;

	if (retn(*str) != -1)
		return (get_line(str));
	ret = read(fd, buffer, BUFFER_SIZE);
	if (ret <= 0)
	{
		if (**str)
			return (get_line(str));
		else
		{
			free(*str);
			*str = NULL;
			return (0);
		}
	}
	buffer[ret] = '\0';
	txt = ft_strjoin(*str, buffer);
	free(*str);
	*str = NULL;
	*str = ft_strdup(txt);
	free(txt);
	txt = NULL;
	return (rd_buffer(str, buffer, fd));
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	char		*line;
	static char	*arr;

	if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE < 1 || (read(fd, NULL, 0) < 0))
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (0);
	if (!arr)
		arr = ft_strdup("");
	line = rd_buffer(&arr, buffer, fd);
	free(buffer);
	buffer = NULL;
	return (line);
}

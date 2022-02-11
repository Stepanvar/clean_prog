#include "stdio.h"
#include "unistd.h"
#include "displayer.h"

int	ft_isdigit(char d)
{
	if ('0' <= d && d <= '9')
		return (1);
	else
		return (0);
}

int	ft_strlen(char *strl)
{
	int i = 0;
	while (strl[i])
		i++;
	return (i);
}

int	ft_printnum(char *sp)
{
	int i;

	i = 0;
	while (sp[i])
		i += write(1, sp + i, 1);
	write(1, "\n", 1);
	return (i);
}

int	ft_usenum(char *str)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
			res = res * 10 + str[i] - '0';
		}
		i++;
	}
	str[i] = '\0';
	ft_printnum(str);
	return (res);
}


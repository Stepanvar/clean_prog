/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccurie <ccurie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:49:14 by ccurie            #+#    #+#             */
/*   Updated: 2022/03/03 21:51:20 by ccurie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "get_next_line.h"
#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
#include "fcntl.h"

typedef struct s_vars {
	void	*mlx;
	void	*win;
	void	*pick;
	void	*player;
	void	*wall;
	void	*door;
}	t_vars;

int	key_hook(int keycode, t_vars *vars)
{
	printf("done\n");
	if (53 == keycode)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);
	}
	return (0);
}

void	ft_handlemap(char **mapl, t_vars v)
{
	int	i, x, y, j, c;

	i = 0;
	x = 64;
	y = 64;
	c = 0;
	while (mapl[i])
	{
		j = 0;
		while (mapl[i][j])
		{
			if ('1' == mapl[i][j])
			{
				mlx_put_image_to_window(v.mlx, v.win, v.wall, 64 + x * j, 64 + y * i);
			}
			j++;
		}
		i++;
	}
}

void	ft_maprender(char *file, t_vars v)
{
	int		fd;
	int		i;
	char	c;
	char	**str;

	i = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, &c, 1) > 0)
	{
		if (c == '\n')
			i++;
	}
	close(fd);
	fd = open(file, O_RDONLY);
	str = (char **) malloc(sizeof(char *) * i + 1);
	i = 0;
	while (str[i] != NULL)
	{
		str[i] = get_next_line(fd);
		printf("%s", str[i]);
		if (!str[i])
			break ;
		i++;
	}
	str[i] = NULL;
	ft_handlemap(str, v);
	close(fd);
}

int	main(int argc, char *argv[])
{	
	t_vars	vars;
	//int		exit;
	int		w;
	int		h;
	if (argc <= 0)
		return (1);
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 1200, 1200, "Check init");
	vars.pick = mlx_xpm_file_to_image(vars.mlx, "sprite/picks.xpm", &w, &h);
	vars.wall = mlx_xpm_file_to_image(vars.mlx, "sprite/walls.xpm", &w, &h);
	printf("%d, %d\n", w, h);
	ft_maprender(argv[1], vars);
	//mlx_put_image_to_window(vars.mlx, vars.win, vars.pick, 80, 80);
	mlx_hook(vars.win, 2, 1L << 0, key_hook, &vars);
	mlx_loop(vars.mlx);
}

#include "ft_atoi.h"

int ft_atoi(char *str)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while(str[i])
	{
		num = num * 10 + (int) str[i];
		i++;
	}
	return (num);
}

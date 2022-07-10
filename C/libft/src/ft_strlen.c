#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return(-1);
	while(str[i])
		i++;
	return(i);
}

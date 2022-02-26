#include "../libs/libft/src/libft.h"
#include "stdio.h"

int main(void)
{
	char	*str;
	int	i;

	i = 0;
	str = "Hello my friend";
	i = ft_strlen(str);
	printf("%d", i);
	return (0);
}

#include "libft.h"
#include "stdio.h"

int	main(void)
{
	int	i = 100;
	char	*str = "my friend";
	i = ft_printf("hello %s\n", str);
	printf("|%d|\n", i);
	i = printf("hello %s\n", str);
	printf("|%d|\n", i);
	return (0);
}

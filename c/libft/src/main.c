#include "libft.h"
#include "stdio.h"

int	main(void)
{
	int	i = 100;
	char	*str = "my friend";
	i = ft_printf("hello %10.3s\n", str);
	ft_printf("|%d|\n", i);
	i = printf("hello %10.3s\n", str);
	printf("|%d|\n", i);
	return (0);
}

#include "libft.h"
#include "stdio.h"

int	main(void)
{
	int	i = 10009;
	char	*str = "my friend";
	ft_printf("hello %10.3x\n", i);
	ft_printf("|%d|\n", i);
	printf("hello %10.3x\n", i);
	printf("|%d|\n", i);
	return (0);
}

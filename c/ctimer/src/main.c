#include "stdlib.h"
#include "libft.h"
#include "stdio.h"


int	main(void)
{
	char	*s;
	char	*command;
	command = "termux-toast -b black -g bottom Time_passed";
	system(command);
	ft_printf("Enter what will you do\n");
//	scanf("%s", &s);

	return (0);
}

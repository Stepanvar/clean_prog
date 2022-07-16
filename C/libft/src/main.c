#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc == 3)
		return ft_print_rnd_hyst(ft_atoui(argv[1]), ft_atoui(argv[2]));
	else
		return (-1);
}
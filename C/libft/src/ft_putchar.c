#include "libft.h"
#include <unistd.h>
#include <stdio.h>
unsigned char ft_putchar(unsigned char c)
{
	write(1, &c, 1);
	return c;
}
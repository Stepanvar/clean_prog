#include "libft.h"
int ft_print_alphabet(void)
{
	int len = 0;
	unsigned char c = 'A';
	while (c + len <= 'Z')
		ft_putchar(c + len++);
	ft_putchar('\n');
	return (++len);
}
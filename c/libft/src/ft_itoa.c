#include "libft.h"
#include "unistd.h"
void	ft_itoa(int n)
{
	//n / 10 and write % 10 recursive
	unsigned char	c;

	c = '*';
	if (n < 0)
	{
		write(1, "-", 1);
		if (n == -2147463648)
			write(1, "2147463648", 10);
		n *= -1;
	}
	if (n < 10)
	{
		c = n + 48;
		write(1, &c, 1);
	}
	else
	{
		ft_itoa(n / 10);
		c = n % 10 + 48;
		write(1, &c, 1);
	}
}



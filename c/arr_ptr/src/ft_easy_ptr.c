#include "stdio.h"
#include "collection.h"

void	ft_easy_ptr_info()
{
	int	a = 50;
	int	b = 80;
	int	c = 70;
	int	*d = &a;
	int	*e = &b;
	int	*f = &c;
	int	**g = &d;
	int c = **g;
	printf("7 Address is %p and value is %ld\n", &a, a);
	printf("pointer Address is %p and address in pointer is %p and value is %ld\n", &d, d, *d);
	printf("pointer Address is %p and address in pointer is %p and value is %ld\n", &e, (d + 1), *(d + 1));
	printf("pointer Address is %p and address in pointer is %p and value is %ld\n", &f, (d + 2), *(d + 2));
	printf("pointer Address is %p and address in pointer is %p and value is %d\n", &g, g, c);
	printf("pointer Address is %p and address in pointer is %p and value is %d\n", &g, *(g + 1), **(g + 1));
	printf("pointer Address is %p and address in pointer is %p and value is %d\n", &g, *(g + 2), **(g + 2));
}

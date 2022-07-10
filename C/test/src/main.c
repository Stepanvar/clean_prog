#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
int	f(int i)
{
	return (i * i);
}
int	x(int a, int b){
	return (a + b);
}
int	main(void)
{
	int	z;
	char	*ptr;
	int	arr[3];


	z = 0;
	int	*p_i = &z;
	z = f(z);
	int	*p_a[2] = {&z};
	int	i_x;
	int	(*p_x);
	//int	x(int a, int b);
	int	(*p_fx)(int, int);
	int	(*p_af[4])(int, int) = {&f, &x};
	int (*p_f[3])(int) = {&f};
	char *str;
	str = (char *)malloc(18);
	if (!str)
		return (-1);
	str = "Hello world";
	char c;
	c = *str;
	printf("%p\n", str);
	printf("%p\n", c);
	printf("%c\n", c);
	
	//int *(f(int)) = &f(int);
	z = p_af[1](z, 8);
	while(0)
	{
		write(1, ptr + z, 1);
		z++;
	}

	printf("%d\n", z);
}

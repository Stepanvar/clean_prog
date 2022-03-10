#include "collection.h"
#include "stdio.h"

int	main(void)
{
	int	i = 0;
	i = ft_arr_vs_ptr();
	//theory: ptr will get set of the addresses which yoy can modify
	//you can change a value of the variable via its adress
	char	*str;
	char	d = '@';
	char	c = ',';
	char	*str1;
	char	arr[5];

	str = &d;
	printf("%s\n", str);
	*str = c;
	printf("%s\n", str);
	printf("%c\n", d);
	printf("You can change the value implicitly when assign a new value to the pointer\n");
	return (i);
}

#include "collection.h"
#include "stdio.h"
#include "stdlib.h"

int	main(void)
{
	int	i = 0;
	//i = ft_arr_vs_ptr();
	//theory: ptr will get set of the addresses which you can modify
	//you can change a value of the variable via its adress
	char	*ptr;
	char	arr[5];
	ft_ptr_info(ptr);
	ft_arr_info(arr);
	return (i);
}

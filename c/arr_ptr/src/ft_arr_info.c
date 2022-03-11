#include "collection.h"
#include "stdio.h"
static void	ft_assign_arr(char arr[])
{
	//arr = "Hero will save us";
	printf("Array not assignable\n");
	arr[0] = '5';
	printf("%s", arr);
	printf("But you can assign an array value\n");	
}

static void ft_init_arr(char arr[])
{
	arr[] = {':', '!', '?'};
	printf("%s\n", arr);
	arr[0] = 35;
	arr[1] = 48;
	arr[2] = 56;
	arr[3] = 64;
	arr[4] = 0;
	printf("%s\n", arr);
}

void	ft_arr_info(char arr[])
{
	ft_assign_arr(arr);
	ft_init_arr(arr);
}

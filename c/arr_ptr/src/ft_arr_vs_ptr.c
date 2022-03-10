#include "stdio.h"
#include "collection.h"

int	ft_arr_vs_ptr(void)
{
	//declare arr
	char	arr[5];
	//declare ptr
	char	*ptr;
	arr[0] = 35;
	arr[1] = 48;
	arr[2] = 56;
	arr[3] = 64;
	arr[4] = 0;
	printf("%s\n", arr);
	ptr = &(arr[0]);
	printf("%s\n", ptr);
printf("arr as a ptr can be declare as char * and printed with %%s\n");
	ptr = 0x7fffffea8b;
	printf("%s\n", ptr);
printf("you assign ptr to an adress\n");
printf("ptr can be assigned a value\n");
//	arr = ptr; //not assignable
printf("arr can't be assignable\n");
	printf("sizeof arr %lu\n", sizeof(arr));
	printf("sizeof ptr %lu\n", sizeof(ptr));
	arr[2] = *ptr;
	printf("%s\n", ptr);
printf("ptr save an adress of value, so when the value is changed the pointer values is also changed\n");
	int	i = 42;
	ptr[2] = &i;
	//int adress in arr and get it access
	//ptr in main assign to arr adress in func
	return (0);
}

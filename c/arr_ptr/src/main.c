#include "stdio.h"

int	main(void)
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
	ptr = &(arr[0]);
	printf("%s\n", arr);
	printf("%s\n", ptr);
	printf("arr can be declare as char * and printed with %%s\n");
	printf("ptr can be assigned a value\n");
	arr = ptr; //not assignable
	printf("sizeof arr %lu\n", sizeof(arr));
	printf("sizeof ptr %lu\n", sizeof(ptr));
	return (0);
}

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
	printf("arr as a ptr can be declare as char * and printed with %%s\n");
	printf("ptr can be assigned a value\n");
//	arr = ptr; //not assignable
	printf("arr can't be assignable\n");
	printf("sizeof arr %lu\n", sizeof(arr));
	printf("sizeof ptr %lu\n", sizeof(ptr));
	arr[2] = *ptr;
	printf("%s", ptr);
	printf("ptr save an adress of value, so when the value is changed the pounter values is also changed\n");
	//int adress in arr and get it access
	return (0);
}

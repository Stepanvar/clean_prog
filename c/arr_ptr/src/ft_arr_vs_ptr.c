#include "stdio.h"
#include "collection.h"

static void	ft_print_p_a(char *ptr, char arr[])
{
	printf("%s\n", arr);
	ptr = &(arr[0]);
	printf("%s\n", ptr);
printf("An arr and a ptr can be declare as char * and printed with %%s\n");

}

static	void	ft_assign_p(char *ptr)
{
	char	p = '+';
	printf("You can assign a pointer to:\n");
	printf("an adress but it's dangerous\n");
	//ptr = 0x7fffffea8b;
	//printf("\t%s\n", ptr);
	printf("a value's address\n");
	ptr = &p;
	ptr[1] = 0;
	printf("\t%c\n", ptr);
	printf("a string (memory allocated implicitly)\n");
	ptr = "Hello my friend, I missed you";
	printf("\t%s\n", ptr);
}

static void	ft_init_p()
{
	printf("You can init pointer:\n");
	char	*mptr;
	printf("\tDynamically via malloc\n");
	mptr = (char *)malloc(10 + sizeof(char) + 1);
	printf("%s", mptr);
	char	*lptr;
	printf("\tWith a string literal(ro data)\n");
	lptr = "Hello my hero";
	printf("%s", lptr);
	printf("\tGive ")
}

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

	ptr = "I'm a hero";
	ft_print_p_a(ptr, arr);
	ft_assign_p(ptr);
//	arr = ptr; //not assignable
	printf("arr can't be assignable\n");
	printf("sizeof arr %lu\n", sizeof(arr));
	printf("sizeof ptr %lu\n", sizeof(ptr));
	arr[2] = 0;
	printf("%s\n", ptr);
	printf("ptr save an adress of value, so when the value is changed the pointer values is also changed\n");
	char	i = 42;
	char	*str;
	char	*d = "@";
	char	*c = ",68";
	char	*str1;
	char	arr[5];

	str = "ghu";
	str = d;
	printf("%s\n", str);
	*str = ',';//value is not assignable
	printf("%s\n", str);
	printf("d = %s\n", d);
	printf("You can change the value implicitly when assign a new value to the pointer\n");
	//ptr[2] = &i;
	//int adress in arr and get it access
	//ptr in main assign to arr adress in func
	return (0);
}

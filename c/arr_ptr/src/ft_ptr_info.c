#include "collection.h"
#include "stdio.h"
static	void	ft_assign_p(char *ptr)
{
	char	p = '+';
	printf("You can assign a pointer to:\n");
	printf("\tAn adress but it's dangerous\n");
	//ptr = 0x7fffffea8b;
	//printf("\t%s\n", ptr);
	printf("\tA value's address\n");
	ptr = &p;
	ptr[1] = 0;
	printf("\t%c\n", ptr);
	printf("\tA string (memory allocated implicitly)\n");
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

static void	ft_change_var(char *ptr)
{
	char	c = '#';
	ptr = &c;
	*ptr = '*';
	printf("%c\n", c);
	printf("ptr save an adress of value, so when the value is changed the pointer values is also changed\n");
}

void	ft_ptr_info(char *ptr)
{
	ft_assign_p(ptr);
	ft_init_p(ptr);
	/*char	i = 42;
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
	*/
}


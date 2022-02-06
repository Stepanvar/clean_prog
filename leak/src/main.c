#include "stdlib.h"
#include "stdio.h"

int	main(void)
{
	char	*str;
	str = (char *)malloc(10 * sizeof(char));
	str[0] = 'H';
	str[1] = 'e';
	str[2] = 'l';
	str[3] = '!';
	printf("%s\n", str);
	free(str);
	str = NULL;
	return (0);
}

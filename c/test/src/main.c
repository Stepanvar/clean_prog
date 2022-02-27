#include "stdio.h"
#include "unistd.h"

int	main(void)
{
	int	z;
	char	*ptr;
	int	arr[3];

	z = 0;
	while(1)
	{
		write(1, ptr + z, 1);
		z++;
	}

	printf("%d\n", z);
}

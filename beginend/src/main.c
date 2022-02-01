#include "../displayer/src/displayer.h"
#include "unistd.h"
#include "stdio.h"

int   main(int argc, char **argv)                  
{                                                  
	int     i = 0;
	int     res;
	res = 0;
	if (1 == argc)
		return (write(1, "argc\n", 5));
	while (i < argc)
	{
		res = ft_usenum(argv[i]);
		printf("%d\n", res);
		i++;
	}
	return (0);
}

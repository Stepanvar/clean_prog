#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*arr = "16753420";

	arr = ft_selectionsort(arr);
	printf("%s", arr);
	free(arr);
	arr = NULL;
	return (0);
}

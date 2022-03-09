#include "sort.h"
#include "stdio.h"

int	main(void)
{
	char	*arr = "16753420";
	int	i = 0;

	arr = ft_selectionsort(arr);
	printf("%s", arr);
	free(arr);
	arr = NULL;
	return (0);
}

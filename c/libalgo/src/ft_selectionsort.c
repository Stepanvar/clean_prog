#include "sort.h"
#include "stdlib.h"

char	*ft_strcp(char *sarr, char *unsarr)
{
	int j = 0;

	while (unsarr[j])
	{
		sarr[j] = unsarr[j];
		j++;
	}
	return (sarr);
}

char	*ft_selectionsort(char *unsarr)
{
	char	min;
	int	last_sort_num;
	int	i;
	int	len;
	int	tmp;
	char	*sarr;

	last_sort_num = 0;
	len = 0;
	i = 0;
	sarr = (char *)malloc(sizeof(char) * 100);
	sarr = ft_strcp(sarr, unsarr);
	min = sarr[0];
	while (sarr[len])
		len++;
	while (last_sort_num < len)
	{
		i = last_sort_num;
		while (i < len)
		{
			if (sarr[i] < min)
			{
				//find min variables
				min = sarr[i];
				//save its index
				tmp = i;
			}
			i++;
		}
		//change values
		sarr[tmp] = sarr[last_sort_num];
		sarr[last_sort_num] = min;
		last_sort_num++;
		//set new min
		min = sarr[last_sort_num];
	}
	return (sarr);
}

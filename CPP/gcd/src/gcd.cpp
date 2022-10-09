#include "gcd.h"
#define MIN 0
#define MAX 1
int	*ft_sort_nums(int a, int b)
{
	int *arr = new int[2];
	arr[0] = a >= b ? b : a;
	arr[1] = a >= b ? a : b;
	return arr;
}

int	ft_recurse_gcd(int a, int b)
{
	int *sorted_nums = ft_sort_nums(a, b);
	int remainder = sorted_nums[MAX] % sorted_nums[MIN];
	if (remainder == 0)
	{
		remainder = sorted_nums[MIN];
		delete []sorted_nums;
		return remainder;
	}	
	else
	{
		int gcd  = ft_recurse_gcd(sorted_nums[MIN], remainder);
		delete []sorted_nums;
		return gcd;
		
	}	
}

int ft_cycle_gcd(int a, int b)
{
	int *sorted_nums = ft_sort_nums(a, b);
	int gcd = sorted_nums[MAX];
	while (sorted_nums[MIN] != 0)
	{
		gcd = sorted_nums[MIN];
		sorted_nums[MIN] = sorted_nums[MAX] % sorted_nums[MIN];
		sorted_nums[MAX] = gcd; 
	}
	delete [] sorted_nums;
	return gcd;
}
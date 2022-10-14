#include "main.h"
#include <chrono>
#include <bits/stdc++.h>
#include <iostream>
#define MIN 0
#define MAX 1
double ft_get_mean_time(int32_t (*func)(int32_t, int32_t, int32_t (*func2)(int32_t, int32_t)), int32_t (*func2)(int32_t, int32_t))
{
	using namespace std;
	using namespace std::chrono;
	int32_t		x, y;
	double	time_taken = 0.0;

	x = 36;
	y = 24;
	for (uint32_t i = 0; i < 1000; i++)
	{
		auto start = high_resolution_clock::now();
		if (func == nullptr)
			func2(x, y);
		else
			func(x, y, func2);
		auto stop = high_resolution_clock::now();
		time_taken += duration_cast<nanoseconds>(stop - start).count();
	}
	return time_taken / 1000.0;
}
int32_t	*ft_sort_nums(int32_t a, int32_t b)
{
	int32_t *arr = new int[2];
	arr[0] = a >= b ? b : a;
	arr[1] = a >= b ? a : b;
	return arr;
}

int32_t	ft_recurse_gcd(int32_t a, int32_t b)
{
	int32_t *sorted_nums = ft_sort_nums(a, b);
	int32_t remainder = sorted_nums[MAX] % sorted_nums[MIN];
	if (remainder == 0)
	{
		remainder = sorted_nums[MIN];
		delete []sorted_nums;
		return remainder;
	}	
	else
	{
		int32_t gcd  = ft_recurse_gcd(sorted_nums[MIN], remainder);
		delete []sorted_nums;
		return gcd;
		
	}	
}

int32_t ft_cycle_gcd(int32_t a, int32_t b)
{
	int32_t *sorted_nums = ft_sort_nums(a, b);
	int32_t gcd = sorted_nums[MAX];
	while (sorted_nums[MIN] != 0)
	{
		gcd = sorted_nums[MIN];
		sorted_nums[MIN] = sorted_nums[MAX] % sorted_nums[MIN];
		sorted_nums[MAX] = gcd; 
	}
	delete [] sorted_nums;
	return gcd;
}
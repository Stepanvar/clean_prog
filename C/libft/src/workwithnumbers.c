#include "libft.h"
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int ft_atoui(char *nbr)
{
	unsigned int num = 0;
	unsigned int len = 0;
	unsigned int i = 0;
	if (nbr[0] == '-')
		return 4294967295;
	while (nbr[len])
		len++;
	while (i < len)
	{
		num = num * 10 + nbr[i++] - 48;
	}
	return (num);
}

unsigned int	*ft_calloc(unsigned int count)
{
	unsigned int *memory;
	memory = (unsigned int *)malloc(sizeof(unsigned int) * count);
	if (!memory)
		return NULL;
	while (count != 0)
		memory[--count] = 0;
	return (memory);
}

/**
 * @brief return dynamic unsigned int pointer or NULL. maxvalue exclusive
 * 
 * @param count 
 * @param maxvalue 
 * @return unsigned int* 
 */
unsigned int	*ft_gen_rnd_nums(unsigned int count, unsigned int maxvalue)
{
	unsigned int	*rnd_nums;
	srand(time(NULL));

	if (count == 0)
		return NULL;
	rnd_nums = (unsigned int *)ft_calloc(count);
	if (!rnd_nums)
		return NULL;
	while (count != 0)
		rnd_nums[--count] = rand() % maxvalue;
	return (rnd_nums);
}

unsigned int	*ft_find_nums_frequency(unsigned int *set, unsigned int count, unsigned int maxvalue)
{
	unsigned int *nums_frequency;
	nums_frequency = (unsigned int *)ft_calloc(maxvalue);
	if (!nums_frequency)
		return NULL;
	while (count != 0)
		nums_frequency[set[--count]] += 1;
	return (nums_frequency);
}

int ft_print_rnd_hyst(unsigned int count, unsigned int maxvalue)
{
	unsigned int	*rnd_nums;
	unsigned int	*nums_freq;

	rnd_nums = ft_gen_rnd_nums(count, maxvalue);
	if (!rnd_nums)
		return (-1);
	for (unsigned int j = 0; j < count; j++)
	{
		printf("|%d|", rnd_nums[j]);
	}
	printf("\n");
	nums_freq = ft_find_nums_frequency(rnd_nums, count, maxvalue);
	if (!nums_freq)
		return -1;
	for (unsigned int i = 0; i < maxvalue; i++)
	{
		if (nums_freq[i] == 0)
			continue;
		printf("%d\t|%d", i, nums_freq[i]);
		while ((nums_freq[i])-- != 0)
			printf("#");
		printf("\n");
	}
	free(rnd_nums);
	free(nums_freq);
	return (0);
}
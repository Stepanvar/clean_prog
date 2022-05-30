#include <iostream>
#include "algo.hpp"
using namespace std;
s_num *ft_bubble_sort(s_num *list)
{
	s_num	*next;
	s_num	tmp;
	s_num	*begin;
	int		is_sorted = 1;

	begin = list;
	while (is_sorted)
	{
		is_sorted = 0;
		list = begin;
		next = begin->next;
		while (next != NULL)
		{
			if (list->i > next->i)
			{
				tmp = *list;
				*list = *next;
				*next = tmp;
				next->next = list->next;
				list->next = next;
				is_sorted++;
			}
			list = next;
			next = next->next;
		}
	}
	return (begin);
}

int main()
{
	s_num	first, second, third;
	s_num	*sort;
	first.i = 50;
	first.next = &second;
	second.i = 10;
	second.next = &third;
	third.i = 150;
	third.next = NULL;
	sort = &first;
	sort = ft_bubble_sort(&first);
	while (sort)
	{
		cout << sort->i << endl;
		sort = sort->next;
	}
	return (0);
}
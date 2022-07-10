#include "libft.h"
s_num *list_bubble_sort(s_num *list)
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
		while (next)
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

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "list.hpp"
using namespace std;
//#sort/bubble #list
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

s_num *delete_list(s_num *start)
{
	//#list/delete
	//go to end via recursion
	//delete each element form end
	if (!start)
		delete_list(start->next);
	free(start->next);
	free(start);
	return(start);
}

s_num *create_list(s_num *start, int amount)
{
	//#create/list
	//dynamically create node
	s_num	*current;
	s_num	*next;

	srand(time(NULL));
	current = start;
	next = start;
	while (amount)
	{
		next = (s_num *) malloc(sizeof(s_num));
		if (!next)
			delete_list(start);
		next->i = rand() % 1000;
		current->next = next;
		current = next;
		amount--;
	}
	return (start);	
}

void	print_list(s_num *start)
{
	while (start)
	{
		cout << start->i << endl;
		start = start->next;
	}
	cout << endl;
}

int main()
{
	s_num	first;
	s_num	*sort;
	
	first.i = 10;
	sort = &first; 
	sort = create_list(sort, 5);
	print_list(sort);
	sort = list_bubble_sort(sort);
	print_list(sort);
	return (0);
}
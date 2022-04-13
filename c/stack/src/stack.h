#ifndef STACK_H
# define STACK_H
# include "unistd.h"
# include "stdio.h"

typedef unsigned char flag; //typedef consists of 'typedef', data type to tag, and tag

struct stackb
{
	int	i;
}; //declare certain struct

struct stackp
{
	int	i;
	struct stackp *next;
}; //you can declare pointer to struct in the struct only with struct keyword

struct stack1
{
	int	i;
	char *str;
	struct stack1 *next;
} G;//declare struct with instance

typedef struct s_stack
{
	int stack;
	char *str;
	struct s_stack *next;
} t_stack;//typedef of the declared struct

#endif
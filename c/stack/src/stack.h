#ifndef STACK_H
# define STACK_H
# include "unistd.h"
# include "stdio.h"

typedef unsigned char flag; //typedef consists of 'typedef', data type to tag, and tag

struct stackb
{
	long long	i;
}; //declare certain struct

struct stackp
{
	long long	i;
	struct stackp *next;
}; //you can declare pointer to struct in the struct only with struct keyword

struct stack1
{
	long long	i;
	char *str;
	struct stack1 *next;
} st1;//declare struct with instance

typedef struct s_stack
{
	long long stack;
	char *str;
	struct s_stack *next;
} t_stack;//typedef of the declared struct

#endif
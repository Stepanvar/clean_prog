#include "stack.h"

int main()
{
    int a = 5;
    int *p;
    struct stackb   num;
    struct stackp   point1;
    struct stackp   point2;
    t_stack s1;
    t_stack s2;

    G.i = 50; //instance declared in the header
    a = G.i;
    p = &a;
    num.i = 67;
    printf("stackb = %d\n", num.i);
    point1.i = num.i + 10;
    point1.next = &point2;
    point2.i = 88;
    printf("stackp = %d\n", point1.i);
    printf("stackp next = %d\n", point1.next->i);
    s1.stack = 99;
    s2.stack = 111;
    s1.str = "first";
    s2.str = "second";
    s1.next = &s2;
    s2.next = NULL;
    printf("t_stack1 = %d\n", s1.stack);
    printf("t_stack1 = %s\n", s1.str);
    printf("t_stack2 = %d\n", s1.next->stack);
    printf("t_stack1 = %s\n", s1.next->str);  
    printf("%d\n", a);
    *p = 10;
    printf("%d", a);
    //printf("%d", a);
    return (0);
}
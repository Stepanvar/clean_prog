#include "stack.h"

int main()
{
    int a = 5;
    int *p;
    struct stackb   num;
    struct stackp   point;
    struct stackp   point2;
    t_stack s1;
    t_stack s2;

    st1.i = 50; //instance declared in the header
    a = st1.i;
    p = &a;
    num.i = 67;
    printf("stackb = %d\n", num.i);
    point.i = num.i + 10;
    point.next = &point2;
    point2.i = 88;
    printf("stackp = %d\n", point.i);
    printf("stackp next = %d\n", point.next->i);
    s1.stack = 100;
    s2.stack = 111;
    s1.str = "first";
    s2.str = "second";
    s1.next = &s2;
    s2.next = NULL;
    printf("it's really magic = %d\n", s1.stack);
    printf("it's really magic = %s\n", s1.str);
    printf("t_stack2 = %d\n", s1.next->stack);
    printf("it's really magic = %s\n", s1.next->str);  
    printf("%d\n", a);
    *p = 10;
    printf("%d", a);
    //printf("%d", a);
    return (0);
}
// SchoolConverter.cpp : Defines the entry point for the application.
//
#include "SchoolConverter.h"
/// <summary>
/// use different typeparams for different types
/// </summary>
/// <typeparam name="T"></typeparam>
/// <typeparam name="D"></typeparam>
/// <param name="lit"></param>
/// <param name="len"></param>
/// <returns></returns>
template<typename T, typename D>
int ft_putstr(T lit, D len)
{
	return fwrite(lit, sizeof(*lit), len, stdout);
}
template<typename T>
T ft_add(T x, T y)
{
	T ptr = &(*x += *y);
	return ptr;
}

int main()
{
	int len = ft_putstr("ABCD", 4);
	double x = 55.378;
	double* xptr = &x;
	double* yptr = &(x-=20);
	double *res = ft_add(xptr, yptr);
	ft_putstr("ALOHA", 200);
	return *res;
}

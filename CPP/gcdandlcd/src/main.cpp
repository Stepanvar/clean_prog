#include <iostream>
#include "main.h"
int	main()
{
	using namespace std;
	cout << ft_get_mean_time(&ft_lcd, &ft_cycle_gcd) << endl;
	cout << ft_get_mean_time(&ft_lcd, &ft_recurse_gcd) << endl;
	cout << ft_get_mean_time(nullptr, &ft_cycle_gcd) << endl;
	cout << ft_get_mean_time(nullptr, &ft_recurse_gcd) << endl;
	return 0;
}
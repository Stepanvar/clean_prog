#include <chrono>
#include <iostream>
#include "gcd.h"
int	main()
{
	using namespace std::chrono;
	auto start = high_resolution_clock::now();
	std::cout << ft_cycle_gcd(100, 54) << std::endl;
	auto stop = high_resolution_clock::now();
	std::cout << "Time spent =" << duration_cast<microseconds>(stop - start).count() << std::endl;
	auto startr = high_resolution_clock::now();
	std::cout << ft_recurse_gcd(100, 54) << std::endl;
	auto stopr = high_resolution_clock::now();
	std::cout << "Time spent =" << duration_cast<microseconds>(stop - start).count() << std::endl;
	return 0;
}
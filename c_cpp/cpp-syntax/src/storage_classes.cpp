#include "syntax.hpp"


void check_static()
{
	static int i = 5;
	switch (i)
	{
	case 2:
		std::cout << "2" << std::endl;
		break;
	case 3:
		std::cout << "3" << std::endl;
		break;
	case 5:
		std::cout << "5" << std::endl;
		break;
	default:
		std::cout << i << std::endl;
		break;
	}
	i--;
}

void	static_vs_auto(void)
{
	//static stores up-to-date data in function
	static int st = 10;
	int	a = 6;
	st--;
	a--;
	std::cout << st << std::endl;
	std::cout << a << std::endl;
}

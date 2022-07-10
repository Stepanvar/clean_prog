#include "syntax.hpp"

void print_data_size(void)
{
	std::cout << "unsigned int " << sizeof(unsigned int) << std::endl;
	std::cout << "short int " << sizeof(short int) << std::endl;
	std::cout << "float " << sizeof(float) << std::endl;
	std::cout << "double " << sizeof(double) << std::endl;
	std::cout << "char " << sizeof(char) << std::endl;
	std::cout << "char * " << sizeof(char *) << std::endl;
	std::cout << "bool " << sizeof(bool) << std::endl;
	std::cout << INT32_MAX << std::endl;
	std::cout << INT32_MIN << std::endl;
	std::cout << sizeof(days) << std::endl;
}
#include "hello.hpp"
#include <iostream>

int hello_all()
{
	using namespace std;
	try
	{
		cout << "Hello, World!" << endl;
		cout << "Hello, Cmake!" << endl;
		cout << "Hello, Docker!" << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return -1;
	}
	return 0;
}
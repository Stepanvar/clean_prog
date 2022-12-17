#include <cstddef>
#include <cstdint>
#include <fstream>
#include <gtest/gtest.h>
#include <iostream>
class Var
{
public:
	Var ()
	{
		std::cout << "Obj created" << std::endl;
		this->x = 42;
	}
	Var (int num): x(num) { };
	virtual ~Var ()
	{
		std::cout << "Obj destructor" << std::endl;
	}
	int GetX() const
	{
		return x;
	}
	void SetX(int n)
	{
		x = n;
	}
private:
	int x;
};
Var operator+=(Var x, Var y)
{
	x.SetX(y.GetX() + x.GetX());
	return x;
}
std::ostream& operator<<(std::ostream& os, const Var& x)
{
	std::cout << x.GetX();
	return os;
}
TEST(CHECK, google)
{
	EXPECT_EQ(0, 0);
}
template<typename T>
T sum(T a, T b)
{
	return a+=b;
}
TEST(CHECK, returned)
{
	int x=5, y=7;
	int s = sum(x, y);
	std::cout << "Sum is " << s << std::endl;
	Var v1, v2(10);
	std::cout << v1 << " " << v2 << std::endl;
	Var vs = sum(v1, v2);
	std::cout << "Sum is " << vs << std::endl;
}
TEST(YAHBOOK, constant)
{
	int x = 0;
	int const y = 5;
	int &ref = x; //for short naming or using without copy
	const int* ptrc = &x;
	int* const cptr = &x;
	int* rptr = &ref;
	ptrc = &y;
	//cptr = &y; error: const pointer
	//++*ptrc; error: const value
	++*cptr;
	std::cout << cptr << std::endl;
	EXPECT_EQ(5, *ptrc);
	EXPECT_EQ(1, *cptr);
}
TEST(YAHBOOK, streams)
{
	int a;
	std::cin >> a;
	std::cout << a << std::endl;
}
TEST(YAHBOOK, scope)
{
	int i = 42;
	for (int i = 0; i < 5; i+=5) {
		int c = 0;
		std::cout << i + c << std::endl;//use nearest var
	}
	{
		std::cout << "enter scope" << std::endl;
		Var g;
		std::cout << "scope end" << std::endl;//local var deleted after end of the scope
	}
	std::cout << i << std::endl;//for i deleted
	//c+= 20; error: not in scope
}
TEST(CHECK, crement)
{
	int i = 0;
	i++;
	std::cout << ++++++i << std::endl;
}
TEST(CHECK, dynalloc)
{
	{
		Var *l = new Var();
		delete l;
	}
}	
TEST(YAHBOOK, sizedint)
{
	int64_t i8 = INT64_MAX;
	int32_t i4 = INT32_MAX;
	int16_t i2 = INT16_MAX;
	int8_t i1 = 5;
	std::cout << i8 << " " << sizeof(i8) << std::endl;
	std::cout << i4 << " " << sizeof(i4) << std::endl;
	std::cout << i2 << " " << sizeof(i2) << std::endl;
	std::cout << i1 << " " << sizeof(i1) << std::endl;
}
int main(int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}



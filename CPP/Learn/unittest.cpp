#include <cstddef>
#include <vector>
#include <cstdint>
#include <gtest/gtest.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <sys/types.h>
class Var
{
public:
	Var ()
	{
		std::cout << "Obj created" << std::endl;
		this->x = 42;
	}
	virtual ~Var ()
	{
		std::cout << "Obj destructor" << std::endl;
	}

private:
	int x;
};
TEST(CHECK, google)
{
	std::cout << "I can overcome it" << std::endl;
	EXPECT_EQ(0, 0);
}
TEST(YAHBOOK, floatcmp)
{
	//EXPECT_EQ(0.3, 0.1+0.2);
	std::cout << "0.1 + 0.2 = " << std::setprecision(17) << 0.1 + 0.2 << std::endl; //0.30000000000000004
	float delta = 0.0000001f; //you must choose it for each statement
	float sum = 0.1 + 0.2;
	std::vector<std::vector<int>> mat(5, std::vector<int>(10));
	std::vector<char> v(5, 'g');
	if (std::abs(sum - 0.3) < delta) {
		EXPECT_EQ(0, 0);
	}
	else {
		EXPECT_EQ(0, 1);
	}
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
TEST(YAHBOOK, russtr)
{
	std::string rus = "Привет, Мир!";
	for (int i = 0; i < rus.size(); i++) {
		std::cout << static_cast<u_char>(rus[i]) << "\t" << static_cast<int>(rus[i]) << std::endl;
	}
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



#include "syntax.hpp"
using namespace std;

int g_b = 10;//global var
template<typename T>
void print(T var)
{
	std::cout << var << std::endl;
}
class People
{
protected:
	int growth;
	int weight;
	bool gender;
	char *description;
public:
	void	setHeight(int height);
	void	setMass(int mass);
	People(int height, int mass);
	~People();
};
void	People::setHeight(int height)
{
	People::growth = height;
}

void	People::setMass(int mass)
{
	People::weight = mass;
}
People::People(int height, int mass): growth(height), weight(mass)
{
	print("One more human was born");
}

People::~People()
{
	print("One human dead. Mourn");
}

class Male: public People
{
protected:
	bool gender = true;
public:
	Male(int height, int mass);
	~Male();
};
Male::Male(int height, int mass): People(height, mass)
{
	print("It is a boy");
}
Male::~Male()
{
	print("He is dead");
}
int	main()
{
	People	Luntik(180, 60);
	Male	Spider_man(190, 80);

	//int	i = 10;
	//print(i);
	return (0);
}
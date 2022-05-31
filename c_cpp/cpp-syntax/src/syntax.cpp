#include "syntax.hpp"
using namespace std;

int g_b = 10;//global var

/**
 * @brief print any type var
 * 
 * @tparam T 
 * @param var 
 */
template<typename T>
void print(T var)
{
	std::cout << var << std::endl;
}

/**
 * @brief class People
 * 
 */
class People
{
protected:
	int height;
	int weight;
	bool gender;
	char *description;
public:
	void	setHeight(int h);
	void	setMass(int m);
	People(int h, int m);
	~People();
};
void	People::setHeight(int h)
{
	People::height = h;
}

void	People::setMass(int m)
{
	People::weight = m;
}
People::People(int h, int m): height(h), weight(m)
{
	print("One more human was born");
}

People::~People()
{
	print("One human dead. Mourn");
}

class Male: public People
{
	char	mark;
protected:
	bool gender = true;
	void genMark(int h, int m);
public:
	Male(int h, int m);
	~Male();
};
/**
 * @brief generate mark base on height and weight
 * 
 * @param h 
 * @param m 
 */
void	Male::genMark(int h, int m)
{
	float	imt;
	imt = (float) m / h * h / 10000;
	if (imt == 20)
		Male::mark = 'A';
	else if (imt > 20)
		Male::mark = 'C';
	else
		Male::mark = 'B';	
}
Male::Male(int h, int m): People(h, m)
{
	Male::genMark(h, m);
	print("It is a boy");
}
Male::~Male()
{
	print("He is dead");
}
int	main()
{
	People	Cherchil(180, 60);
	Male	Stalin(190, 80);

	return (0);
}
#include <iostream>
using namespace std;
class Plate
{
	public:
		int age;
		bool isBroken;
	void Info()
	{
		cout << age << ' ' << (bool)isBroken << ' ' << endl;
	}
};
class Person
{
	public:
		int age;
		int weight;
	Person(int age, int weight)
	{
		this->age = age;
		this->weight = weight;
	}
	void Info()
	{
		cout << this->age << ' ' << this->weight << endl;
	}
};
int main()
{
	Plate plate1;
	Person person1(50, 180);
	person1.Info();
	plate1.age = 10;
	plate1.isBroken = false;
	plate1.Info();
	cout << "Hello world" << endl;
}
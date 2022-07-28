#include "test.hpp"
#include <iostream>
#include <string.h>
using namespace std;
class Human
{
private:
	int _height;

public:
	int Age;
	string Name;
	Human(int h, int a);
	Human();
	~Human();
	int GetHeight(){
		return _height;
	};
};

Human::Human(int h, int a)
{
	_height = h;
	Age = a;
}
Human::Human() {}
Human::~Human()
{
}
int CreateHuman()
{
	Human human1(190, 30);
	human1.Age = 25;
	human1.Name = "Peter";
	cout << human1.Name << " is: " << human1.Age << " " << human1.GetHeight() << endl;
	Human human2(185, 19);
	human2.Name = "Ivan";
	cout << human2.Name << " is: " << human2.Age << " " << human2.GetHeight() << endl;
	return (0);
}
int sum(int a, int b)
{
	return a + b;
}

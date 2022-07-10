#include <iostream>
using namespace std;
class Dog
{
public:
	char *name;
	int age;
	Dog(char *dogname, int dogAge);
	~Dog();
	void Walk()
	{
		int i = 0;
		cout << "Walk started" << endl;
		while (i < 2000000000)
			i++;
		cout << "Walk ended" << endl;
	}
};

Dog::Dog(char *dogname, int dogAge)
{
	this->name = dogname;
	this->age = dogAge;
}

Dog::~Dog()
{
}
int main(){
	Dog mydog = Dog("Jack", 5);
	mydog.Walk();
	cout << mydog.name << " " << mydog.age << endl;
	mydog.~Dog();
}
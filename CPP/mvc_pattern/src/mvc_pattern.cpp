#include "mvc_pattern.hpp"
#include <iostream>
#include <list>
class Card
{
public:
	char *Name;
	double Cost;
	virtual int Activate() = 0;
};

class Expendable: public Card
{
public:
	char *Description;
	virtual int Use() = 0;
	virtual int MakeEffect() = 0;
};
class Destroyable: public Card
{
public:
	int Health;
	int Armour;
	char *Description;
	virtual int Destroy() = 0;
};
class Player: public Destroyable
{
private:
	double Balance = 50;
public:
	Player(int health, char *name, char *desription);
	~Player();
	void SetBalance(double balance) {Balance = balance;}
	double GetBalance() {return Balance;}
	int Destroy()
	{
		std::cout << "Player: " << Name << "is dead" << std::endl;
		return 0;
	};
};

Player::Player(int health, char *name, char *description)
{
	Health = health;
	Name = name;
	Description = description;
}

Player::~Player()
{
}
class Installable: public Destroyable
{
protected:
	int X;
	int Y;
	int Size = 1;
	int Perfomance;
public:
	virtual int Place();
	virtual int Produce();
	Installable(char *name, double cost, char *Desciption, int health);
	~Installable();
	void SetX(double x) {X = x;}
	int GetX(){return X;}
	void SetY(double y) {Y = y;}
	int GetY(){return Y;}
	int GetSize(){return Size;}
};

Installable::Installable(char *name, double cost, char *description, int health)
{
	Name = name;
	Cost = cost;
	Description = description;
	Health = health;
}

Installable::~Installable()
{
}

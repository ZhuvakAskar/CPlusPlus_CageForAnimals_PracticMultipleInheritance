#pragma once
#include"Header.h"
class Animal
{
protected:
	string name;
	bool predator;
public:
	Animal();
	Animal(string name, bool predator);
	~Animal();

	void setname(string name);
	void setpredator(bool predator);

	string getname()const&;
	bool getpredator()const&;

	virtual void show()const& = 0;
};


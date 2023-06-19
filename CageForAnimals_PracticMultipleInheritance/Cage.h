#pragma once
#include"Header.h"
#include"Animal.h"
class Cage
{
	int number;
	double size;
	int maxcount;
	int countanimal;
	Animal** mas;
public:
	Cage();
	Cage(int number, double size, int maxcount);
	~Cage();

	void setnumber(int number);
	void setsize(double size);
	void setmaxcount(int maxcount);

	int getnumber()const&;
	double getsize()const&;
	int getmaxcount()const&;
	int getcountanimal()const&;

	void addanimal(Animal* obj);
	void dellanimal(int pos);

	void showlist()const&;
	void show();

	Animal* operator[](int n);
};


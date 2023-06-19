#include "Bird.h"

Bird::Bird(string name, bool predator,int speed):Animal(name,predator)
{
	this->speed = speed;
}

Bird::Bird():Animal()
{
    this->speed = 20;
}

Bird::~Bird()
{
}

void Bird::setspeed(int speed)
{
	this->speed = speed;
}

int Bird::getspeed() const&
{
	return this->speed;
}

void Bird::show()const&
{
    cout << "���: " << name << endl;
    if (this->predator == 0) {
        cout << "������" << endl;
    }
    else {
        cout << "���������(����������)" << endl;
    }
    cout << "�������� �����: " << this->speed << " ��/�" << endl;
}

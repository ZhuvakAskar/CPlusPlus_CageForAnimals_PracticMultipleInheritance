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
    cout << "Имя: " << name << endl;
    if (this->predator == 0) {
        cout << "Хищник" << endl;
    }
    else {
        cout << "Консумент(травоядный)" << endl;
    }
    cout << "Скорость полёта: " << this->speed << " км/ч" << endl;
}

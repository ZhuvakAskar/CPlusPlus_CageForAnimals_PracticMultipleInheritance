#include "Fish.h"

Fish::Fish():Animal()
{
    this->depth = 50;
}

Fish::Fish(string name, bool predator,int depth) :Animal(name,predator)
{
    this->depth = depth;
}

Fish::~Fish()
{
}

void Fish::setdepth(int depth)
{
    this->depth = depth;
}

int Fish::getdepth() const&
{
    return this->depth;
}

void Fish::show() const&
{
    cout << "Имя: " << name << endl;
    if (this->predator == 0) {
        cout << "Хищник" << endl;
    }
    else {
        cout << "Консумент(травоядный)" << endl;
    }
    cout << "Средняя глубина обитания: " << depth << endl;
}

#include "Animal.h"

Animal::Animal()
{
    this->name = "";
    this->predator = "";
}

Animal::Animal(string name, bool predator)
{
    this->name = name;
    this->predator = predator;
}

Animal::~Animal()
{
}

void Animal::setname(string name)
{
    this->name = name;
}

void Animal::setpredator(bool predator)
{
    this->predator = predator;
}

string Animal::getname() const&
{
    return this->name;
}

bool Animal::getpredator() const&
{
    return this->predator;
}



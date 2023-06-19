#include "Beast.h"

Beast::Beast():Animal()
{
    this->locate = "";
}

Beast::Beast(string name, bool predator,string locate):Animal(name,predator)
{
    this->locate = locate;
}

Beast::~Beast()
{
}

void Beast::sethabitat(string habitat)
{
    this->locate = locate;
}

string Beast::gethabitat() const&
{
    return this->locate;
}

void Beast::show()const&
{
    cout << "Имя: " << name << endl;
    if (this->predator == 0) {
        cout << "Хищник" << endl;
    }
    else {
        cout << "Консумент(травоядный)" << endl;
    }
    cout << "Место обитания: " << locate << endl;
}

#include "Cage.h"


Cage::Cage()
{
    this->number = rand() % 10000;
}

Cage::Cage(int number, double size, int maxcount)
{
    this->number = number;
    this->size = size;
    this->maxcount = maxcount;
    this->countanimal = 0;
}

Cage::~Cage()
{
}

void Cage::setnumber(int number)
{
    this->number = number;
}

void Cage::setsize(double size)
{
    this->size = size;
}

void Cage::setmaxcount(int maxcount)
{
    this->maxcount = maxcount;
}

int Cage::getnumber() const&
{
    return number;
}

double Cage::getsize() const&
{
    return size;
}

int Cage::getmaxcount() const&
{
    return maxcount;
}
int Cage::getcountanimal() const&
{
    return countanimal;
}

void Cage::addanimal(Animal* obj)
{
    Animal** tmp = new Animal * [++countanimal];
    for (int i = 0; i < countanimal - 1; i++)
    {
        tmp[i] = mas[i];
    }
    if (mas != NULL) {
        delete[]mas;
    }
    tmp[countanimal - 1] = obj;
    mas = tmp;
}

void Cage::dellanimal(int pos)
{
    this->mas[pos] = this->mas[this->countanimal - 1];
    this->countanimal--;
}

void Cage::showlist() const&
{
    for (int i = 0; i < countanimal; i++) {
        cout << "--------------------" << i + 1 << "--------------------" << endl;
        this->mas[i]->show();
    }
    cout << "-----------------------------------------" << endl;
}

void Cage::show()
{
    cout << "Номер клетки: " << number << endl;
    cout << "Размер(в м): " << size << endl;
    cout << "Максимальное количество животных: " << maxcount << endl;
    cout << "Сейчас в клетке: " << countanimal << " животных" << endl;
}

Animal* Cage::operator[](int n)
{
    if (n >= 0 && n < this->countanimal) {
        return mas[n];
    }
    else {
        throw "Выход за пределы";
    }
}

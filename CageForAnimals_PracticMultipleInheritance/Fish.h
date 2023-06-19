#pragma once
#include "Animal.h"
#include "Header.h"
class Fish :
    public Animal
{
protected:
    int depth;
public:
    Fish();
    Fish(string name, bool predator, int depth);
    ~Fish();

    void setdepth(int depth);

    int getdepth()const&;

    void show()const& override;
};


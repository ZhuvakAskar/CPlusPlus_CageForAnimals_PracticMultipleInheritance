#pragma once
#include "Animal.h"
class Beast :
    public Animal
{
protected:
    string locate;
public:
    Beast();
    Beast(string name, bool predator,string locate);
    ~Beast();

    void sethabitat(string habitat);

    string gethabitat()const&;

    virtual void show()const& override;
};


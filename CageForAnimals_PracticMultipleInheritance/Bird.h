#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
protected:
    int speed;
public:
    Bird();
    Bird(string name, bool predator,int speed);
    ~Bird();

    void setspeed(int speed);

    int getspeed()const&;

    void show()const& override;

};


#include <iostream>
#include "Ship.h"
using namespace std;

Ship::Ship()
{
    nameShip = "";
    year = 0;
}

Ship::Ship(string nameShip, int year)
{
    this->nameShip = nameShip;
    this->year = (year < 0) ? 0 : year;
}

void Ship::setInfo(string nameShip, int year)
{
    this->nameShip = nameShip;
    this->year = (year < 0) ? 0 : year;
}

string Ship::getNameShip() const
{
    return nameShip;
}

int Ship::getYear() const
{
    return year;
}
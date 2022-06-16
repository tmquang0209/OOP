#include <iostream>
#include "CruiseShip.h"
using namespace std;

CruiseShip::CruiseShip() : Ship()
{
    maximumPassenger = 0;
}

CruiseShip::CruiseShip(string nameShip, int year, int maximumPassenger) : Ship(nameShip, year)
{
    this->maximumPassenger = maximumPassenger;
}

void CruiseShip::setInfo(string nameShip, int year, int maximumPassenger)
{
    Ship::setInfo(nameShip, year);
    this->maximumPassenger = maximumPassenger;
}

int CruiseShip::getPassenger() const
{
    return maximumPassenger;
}

void CruiseShip::print()
{
    cout << "Name ship: " << getNameShip() << endl;
    cout << "Year: " << getYear() << endl;
    cout << "Maximum passenger: " << getPassenger() << endl;
};
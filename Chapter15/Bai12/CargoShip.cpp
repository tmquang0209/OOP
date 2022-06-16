#include <iostream>
#include "CargoShip.h"

using namespace std;

CargoShip::CargoShip() : Ship()
{
    maximumTonOfCargo = 0;
}

CargoShip::CargoShip(string nameShip, int year, int maximumTonOfCargo) : Ship(nameShip, year)
{
    this->maximumTonOfCargo = (maximumTonOfCargo < 0) ? 0 : maximumTonOfCargo;
}

void CargoShip::setInfo(string nameShip, int year, int maximumTonOfCargo)
{
    Ship::setInfo(nameShip, year);
    this->maximumTonOfCargo = (maximumTonOfCargo < 0) ? 0 : maximumTonOfCargo;
}

int CargoShip::getTonOfCargo() const
{
    return this->maximumTonOfCargo;
}

void CargoShip::print()
{
    cout << "Name ship: " << getNameShip() << endl;
    cout << "Year: " << getYear() << endl;
    cout << "Maximum ton of cargo: " << getTonOfCargo() << endl;
}
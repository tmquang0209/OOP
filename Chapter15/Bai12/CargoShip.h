#include <iostream>
#include "Ship.h"
#ifndef CARGOSHIP_H
#define CARGOSHIP_H
class CargoShip : public Ship
{
private:
    /*+ maximumTonOfCargo : int*/
    int maximumTonOfCargo;

public:
    CargoShip();
    CargoShip(string, int, int);
    void setInfo(string, int, int);
    int getTonOfCargo() const;
    void print();
};
#endif
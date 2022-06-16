#include <iostream>
#include "Ship.h"
#ifndef CRUISESHIP_H
#define CRUISESHIP_H
class CruiseShip : public Ship
{
private:
    /*
    + maximumPassenger : int
    */
    int maximumPassenger;

public:
    CruiseShip();
    CruiseShip(string, int, int);
    void setInfo(string, int, int);
    int getPassenger() const;
    void print();
};
#endif
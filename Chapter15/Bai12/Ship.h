#ifndef SHIP_H
#define SHIP_H
#include <iostream>
#include <string>
using namespace std;
class Ship
{
private:
    /*
    + nameShip : string
    + year : int
    */
    string nameShip;
    int year;

public:
    Ship();
    Ship(string, int);
    void setInfo(string, int);
    string getNameShip() const;
    int getYear() const;
    virtual void print() = 0;
};
#endif
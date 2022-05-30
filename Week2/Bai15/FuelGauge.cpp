#include <iostream>
#include "FuelGauge.h"

using namespace std;

FuelGauge::FuelGauge()
{
    fuel = 0;
}

FuelGauge::FuelGauge(int fuel)
{
    this->fuel = fuel;
}

void FuelGauge::setFuel(int fuel)
{
    this->fuel = fuel;
}

int FuelGauge::getFuel()
{
    return fuel;
}

FuelGauge FuelGauge::operator++()
{
    if (fuel < 15)
    {
        ++fuel;
    }
    return *this;
}

FuelGauge FuelGauge::operator++(int)
{
    FuelGauge temp = *this;
    if (fuel < 15)
    {
        fuel++;
    }
    return temp;
}

FuelGauge FuelGauge::operator--()
{
    if (fuel > 0)
    {
        --fuel;
    }
    return *this;
}

FuelGauge FuelGauge::operator--(int)
{
    FuelGauge temp = *this;
    if (fuel > 0)
    {
        fuel--;
    }
    return temp;
}
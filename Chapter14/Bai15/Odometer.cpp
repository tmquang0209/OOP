#include <iostream>
#include "Odometer.h"

using namespace std;

Odometer::Odometer()
{
    odometer = 0;
    fuelGauge.setFuel(15);
}

Odometer::Odometer(int odometer, int fuel)
{
    this->odometer = odometer;
    this->fuelGauge.setFuel(fuel);
}

void Odometer::setOdometer(int odometer)
{
    this->odometer = odometer;
}

void Odometer::setFuelGauge(int fuel)
{
    this->fuelGauge.setFuel(fuel);
}

void Odometer::refuel()
{
    ++fuelGauge;
}

int Odometer::getOdometer()
{
    return odometer;
}

int Odometer::getFuelGauge()
{
    return fuelGauge.getFuel();
}

Odometer Odometer::operator++()
{
    if (odometer < 999999)
    {
        ++odometer;
    }
    else
    {
        odometer = 0;
    }
    return *this;
}

Odometer Odometer::operator++(int)
{
    Odometer temp = *this;
    if (odometer < 999999)
    {
        odometer++;
    }
    else
    {
        odometer = 0;
    }
    return temp;
}

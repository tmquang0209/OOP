#include <iostream>
#include "ParkingMeter.h"
using namespace std;

ParkingMeter::ParkingMeter()
{
    minutes = 0;
}

ParkingMeter::ParkingMeter(int minutes)
{
    this->minutes = minutes;
}

void ParkingMeter::setMinutes(int minutes)
{
    this->minutes = minutes;
}

int ParkingMeter::getMinutes()
{
    return minutes;
}
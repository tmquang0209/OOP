#include <iostream>
#include "Car.h"

using namespace std;

Car::Car(int yearModels, string makes)
{
    yearModel = yearModels;
    make = makes;
    speed = 0;
}

void Car::setYearModel(int yearModels)
{
    yearModel = yearModels;
}

void Car::setMake(string makes)
{
    make = makes;
}

void Car::setSpeed(double speeds)
{
    speed = speeds;
}

int Car::getYearModel() const
{
    return yearModel;
}

string Car::getMake() const
{
    return make;
}

double Car::getSpeed() const
{
    return speed;
}

void Car::accelerate()
{
    speed += 5;
}

void Car::brake()
{
    speed -= 5;
}
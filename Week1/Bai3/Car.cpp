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

int main()
{
    Car car1(2022, "ABC");
    car1.accelerate();
    cout << car1.getSpeed() << endl;
    car1.accelerate();
    cout << car1.getSpeed() << endl;
    car1.accelerate();
    cout << car1.getSpeed() << endl;
    car1.accelerate();
    cout << car1.getSpeed() << endl;
    car1.accelerate();
    cout << car1.getSpeed() << endl;

    cout << "=================" << endl;

    car1.brake();
    cout << car1.getSpeed() << endl;
    car1.brake();
    cout << car1.getSpeed() << endl;
    car1.brake();
    cout << car1.getSpeed() << endl;
    car1.brake();
    cout << car1.getSpeed() << endl;
    car1.brake();
    cout << car1.getSpeed() << endl;
    return 0;
}
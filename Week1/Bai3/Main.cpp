#include <iostream>
#include "Car.h"
#include "Car.cpp"

using namespace std;

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
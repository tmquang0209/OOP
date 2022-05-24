#include <iostream>
#include "Temperature.h"

using namespace std;

Temperature::Temperature()
{
    temperature = 0;
}

void Temperature::setTemperature(double temperature)
{
    this->temperature = temperature;
}

double Temperature::getTemperature() const
{
    return temperature;
}

bool Temperature::isEthylFreezing()
{
    return (temperature <= -173);
}

bool Temperature::isEthylBoiling()
{
    return (temperature >= 172);
}

bool Temperature::isOxygenFreezing()
{
    return (temperature <= -362);
}

bool Temperature::isOxygenBoiling()
{
    return (temperature >= -306);
}

bool Temperature::isWaterFreezing()
{
    return (temperature <= 32);
}

bool Temperature::isWaterBoiling()
{
    return (temperature >= 212);
}

void Temperature::display()
{
    if (isEthylFreezing())
        cout << "Ethyl dong bang" << endl;
    else if (isEthylBoiling())
        cout << "Ethyl soi" << endl;

    if (isOxygenFreezing())
        cout << "Oxygen dong bang" << endl;
    else if (isOxygenBoiling())
        cout << "Oxygen soi" << endl;

    if (isWaterFreezing())
        cout << "Water dong bang" << endl;
    else if (isWaterBoiling())
        cout << "Water soi" << endl;
}

Temperature::~Temperature()
{
}

int main()
{
    Temperature t;
    double temp;
    cout << "Nhap nhiet do: ";
    cin >> temp;
    t.setTemperature(temp);

    cout << "Nhiet do: " << t.getTemperature() << endl;

    t.display();

    // if (t.isEthylFreezing())
    // {
    //     cout << "Ethyl dong bang" << endl;
    // }
    // else if (t.isEthylBoiling())
    // {
    //     cout << "Ethyl soi" << endl;
    // }

    // if (t.isOxygenFreezing())
    // {
    //     cout << "Oxygen dong bang" << endl;
    // }
    // else if (t.isOxygenBoiling())
    // {
    //     cout << "Oxygen soi" << endl;
    // }

    // if (t.isWaterFreezing())
    // {
    //     cout << "Water dong bang" << endl;
    // }
    // else if (t.isWaterBoiling())
    // {
    //     cout << "Water soi" << endl;
    // }
    return 0;
}
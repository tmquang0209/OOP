#include <iostream>
#include "Odometer.h"
#include "Odometer.cpp"
#include "FuelGauge.h"
#include "FuelGauge.cpp"

using namespace std;

int main()
{
    Odometer odometer(999990, 15);
    cout << "Gallon hien tai:" << odometer.getFuelGauge() << endl;
    for (int i = 1; i <= 15 * 24; i++)
    {
        odometer++;
        if (i % 24 == 0)
        {
            odometer.setFuelGauge(odometer.getFuelGauge() - 1);
            cout << endl;
        }

        cout << i << " So dam hien tai: " << odometer.getOdometer()
             << "\t So Gallon con lai: " << odometer.getFuelGauge() << endl;
    }
}
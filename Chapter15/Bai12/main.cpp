#include <iostream>
#include "Ship.h"
#include "Ship.cpp"
#include "CruiseShip.h"
#include "CruiseShip.cpp"
#include "CargoShip.h"
#include "CargoShip.cpp"

using namespace std;
const int SIZE = 2;
int main()
{
    Ship *ship[SIZE] = {new CruiseShip("Tau DL 1", 2018, 150),
                        new CargoShip("Tau CH 1", -100, 1000)};

    for (int i = 0; i < SIZE; i++)
    {
        ship[i]->print();
        cout << endl;
    }
    return 0;
}
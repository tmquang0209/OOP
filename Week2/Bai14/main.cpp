#include <iostream>
#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.cpp"
#include "ParkedCar.cpp"
#include "ParkingMeter.cpp"
#include "ParkingTicket.cpp"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    PoliceOfficer officer[5] = {PoliceOfficer("BWM", "XXA1", "blue", "MS001", 200, 80),
                                PoliceOfficer("VF", "XXA2", "red", "MS002", 60, 50),
                                PoliceOfficer("TOYOTA", "XXA3", "yellow", "MS003", 40, 60),
                                PoliceOfficer("FORD", "XXA4", "pink", "MS004", 55, 50),
                                PoliceOfficer("KIA", "XXA5", "brown", "MS005", 100, 99)};
    for (int i = 0; i < 5; i++)
    {
        officer[i].check();
    }
    return 0;
}
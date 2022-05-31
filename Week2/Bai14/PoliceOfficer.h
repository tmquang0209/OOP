#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
class PoliceOfficer
{
private:
    ParkedCar car;
    ParkingMeter meter;
    ParkingTicket ticket;
    string police[5][2] = {{"Nguyen Van A", "0123456789"},
                           {"Nguyen Van B", "0123456789"},
                           {"Nguyen Van C", "0123456789"},
                           {"Nguyen Van D", "0123456789"},
                           {"Nguyen Van E", "0123456789"}};

public:
    PoliceOfficer();
    PoliceOfficer(string, string, string, string, int, int);
    string getPoliceName(int);
    int getPoliceNumber(int);
    void check();
};
#endif
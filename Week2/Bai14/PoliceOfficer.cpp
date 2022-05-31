#include <iostream>
#include "PoliceOfficer.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <cstdlib>
#include <ctime>

using namespace std;

PoliceOfficer::PoliceOfficer()
{
}

PoliceOfficer::PoliceOfficer(string brand, string model,
                             string color, string licensePlate,
                             int minutes, int minutesLate)
{
    car.setBrand(brand);
    car.setModel(model);
    car.setColor(color);
    car.setLicensePlate(licensePlate);
    car.setMinutes(minutes);
    meter.setMinutes(minutesLate);
}

string PoliceOfficer::getPoliceName(int index)
{
    return police[index][0];
}

int PoliceOfficer::getPoliceNumber(int index)
{
    string idText = police[index][1];
    return stoi(idText);
}

void PoliceOfficer::check()
{
    // cout << car.getBrand() << " " << car.getMinutes() << " " << meter.getMinutes() << endl;
    int indexRand = rand() % 5;
    if (car.getMinutes() > meter.getMinutes())
    {
        ticket.setBrand(car.getBrand());
        ticket.setModel(car.getModel());
        ticket.setColor(car.getColor());
        ticket.setLicensePlate(car.getLicensePlate());
        ticket.setMinutes(car.getMinutes() - meter.getMinutes());
        ticket.setOfficerName(police[0][0]);
        ticket.setOfficerNumber(stoi(police[0][1]));
        cout << car.getBrand() << " (do xe " << car.getMinutes() << " phut)"
             << ". Phat: (" << ticket.getMinutes() << " phut) " << ticket.getFine()
             << "\t Nguoi lap bien ban " << police[indexRand][1] << " " << police[indexRand][0] << endl;
    }
}
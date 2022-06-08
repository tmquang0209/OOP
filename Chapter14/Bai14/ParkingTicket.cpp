#include <iostream>
#include "ParkingTicket.h"
using namespace std;

ParkingTicket::ParkingTicket()
{
    brand = ' ';
    model = ' ';
    color = ' ';
    licensePlate = ' ';
    minutes = 0;
    officerName = ' ';
    officerNumber = 0;
}

ParkingTicket::ParkingTicket(string brand, string model, string color,
                             string licensePlate, int minutes,
                             string officerName, int officerNumber)
{
    this->brand = brand;
    this->model = model;
    this->color = color;
    this->licensePlate = licensePlate;
    this->minutes = minutes;
    this->officerName = officerName;
    this->officerNumber = officerNumber;
}

void ParkingTicket::setBrand(string brand)
{
    this->brand = brand;
}

void ParkingTicket::setModel(string model)
{
    this->model = model;
}

void ParkingTicket::setColor(string color)
{
    this->color = color;
}

void ParkingTicket::setLicensePlate(string licensePlate)
{
    this->licensePlate = licensePlate;
}

void ParkingTicket::setMinutes(int minutes)
{
    this->minutes = minutes;
    setFine();
}

void ParkingTicket::setOfficerName(string officerName)
{
    this->officerName = officerName;
}

void ParkingTicket::setOfficerNumber(int officerNumber)
{
    this->officerNumber = officerNumber;
}

void ParkingTicket::setFine()
{
    fine = 25;
    if (minutes / 60 > 1)
        fine += 10;
}

string ParkingTicket::getBrand()
{
    return brand;
}

string ParkingTicket::getModel()
{
    return model;
}

string ParkingTicket::getColor()
{
    return color;
}

string ParkingTicket::getLicensePlate()
{
    return licensePlate;
}

int ParkingTicket::getMinutes()
{
    return minutes;
}

string ParkingTicket::getOfficerName()
{
    return officerName;
}

int ParkingTicket::getOfficerNumber()
{
    return officerNumber;
}

int ParkingTicket::getFine()
{
    return fine;
}
#include <iostream>
#include "ParkedCar.h"
using namespace std;

ParkedCar::ParkedCar()
{
    brand = ' ';
    model = ' ';
    color = ' ';
    licensePlate = ' ';
    minutes = 0;
}

ParkedCar::ParkedCar(string brand, string model, string color, string licensePlate, int minutes)
{
    this->brand = brand;
    this->model = model;
    this->color = color;
    this->licensePlate = licensePlate;
    this->minutes = minutes;
}

void ParkedCar::setBrand(string brand)
{
    this->brand = brand;
}

void ParkedCar::setModel(string model)
{
    this->model = model;
}

void ParkedCar::setColor(string color)
{
    this->color = color;
}

void ParkedCar::setLicensePlate(string licensePlate)
{
    this->licensePlate = licensePlate;
}

void ParkedCar::setMinutes(int minutes)
{
    this->minutes = minutes;
}

string ParkedCar::getBrand()
{
    return brand;
}

string ParkedCar::getModel()
{
    return model;
}

string ParkedCar::getColor()
{
    return color;
}

string ParkedCar::getLicensePlate()
{
    return licensePlate;
}

int ParkedCar::getMinutes()
{
    return minutes;
}
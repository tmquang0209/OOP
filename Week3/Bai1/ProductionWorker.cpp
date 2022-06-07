#include <iostream>
#include <string>
#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() : Employee()
{
    shift = 0;
    hourlyPayRate = 0;
}

ProductionWorker::ProductionWorker(string name, int id, string date, int shift, double hourlyPayRate) : Employee(name, id, date)
{
    this->shift = shift;
    this->hourlyPayRate = hourlyPayRate;
}

void ProductionWorker::setShift(int shift)
{
    this->shift = shift;
}

void ProductionWorker::setHourlyPayRate(double hourlyPayRate)
{
    this->hourlyPayRate = hourlyPayRate;
}

int ProductionWorker::getShift() const
{
    return shift;
}

double ProductionWorker::getHourlyPayRate() const
{
    return hourlyPayRate;
}

void ProductionWorker::print()
{
    Employee::print();
    cout << "Shift: ";
    if (shift == 1)
        cout << "day";
    else
        cout << "night";
    cout << endl;
    cout << "Hourly pay rate: " << hourlyPayRate << endl;
}

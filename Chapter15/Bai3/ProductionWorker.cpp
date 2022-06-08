#include <iostream>
#include <string>
#include "ProductionWorker.h"

ProductionWorker::ProductionWorker() : Employee()
{
    shift = 0;
    hourlyPayRate = 0;
    salary = 0;
    workingDays = 0;
}

ProductionWorker::ProductionWorker(string name, int id, string date, int shift, double hourlyPayRate, int workingDays) : Employee(name, id, date)
{
    this->shift = shift;
    this->hourlyPayRate = hourlyPayRate;
    this->workingDays = workingDays;
    setSalary();
}

void ProductionWorker::setShift(int shift)
{
    this->shift = shift;
}

void ProductionWorker::setWorkingDays(int workingDays)
{
    this->workingDays = workingDays;
}

void ProductionWorker::setHourlyPayRate(double hourlyPayRate)
{
    this->hourlyPayRate = hourlyPayRate;
}

void ProductionWorker::setSalary()
{
    if (shift == 1)
        salary = workingDays * hourlyPayRate;
    else if (shift == 2)
        salary = workingDays * (hourlyPayRate + (hourlyPayRate * 0.5));
}

int ProductionWorker::getShift() const
{
    return shift;
}

double ProductionWorker::getHourlyPayRate() const
{
    return hourlyPayRate;
}

double ProductionWorker::getSalary()
{
    return salary;
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
    cout << "Working days: " << workingDays << endl;
    cout << "Salary: " << salary << endl;
}

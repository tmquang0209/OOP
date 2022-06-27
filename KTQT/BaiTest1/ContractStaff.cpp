#include <iostream>
#include <string.h>
#include "ContractStaff.h"

using namespace std;

ContractStaff::ContractStaff() : Employee()
{
    hourlyWage = 0;
    workingHours = 0;
}

ContractStaff::ContractStaff(string employeeID, string name, int taxCode,
                             double hourlyWage, double workingHours) : Employee(employeeID, name, taxCode)
{
    this->hourlyWage = hourlyWage;
    this->workingHours = workingHours;
}

void ContractStaff::setHourlyWage(double hourlyWage)
{
    this->hourlyWage = hourlyWage;
}

void ContractStaff::setWorkingHours(double workingHours)
{
    this->workingHours = workingHours;
}

double ContractStaff::getHourlyWage() const
{
    return hourlyWage;
}

double ContractStaff::getWorkingHours() const
{
    return workingHours;
}

double ContractStaff::getSalary()
{
    return hourlyWage * workingHours;
}

void ContractStaff::print()
{
    Employee::print();
    cout << "Hourly wage: " << hourlyWage << endl;
    cout << "Working hours: " << workingHours << endl;
}
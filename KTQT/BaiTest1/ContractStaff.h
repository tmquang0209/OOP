#include <iostream>
#include <string.h>
#include "Employee.h"
#ifndef CONTRACTSTAFF_H
#define CONTRACTSTAFF_H
class ContractStaff : public Employee
{
private:
    /*
    + hourlyWage : double
    + workingHours : double
    */
    double hourlyWage;
    double workingHours;

public:
    ContractStaff();
    ContractStaff(string employeeID, string name, int taxCode,
                  double hourlyWage, double workingHours);
    void setHourlyWage(double hourlyWage);
    void setWorkingHours(double workingHours);
    double getHourlyWage() const;
    double getWorkingHours() const;
    double getSalary();
    void print();
};
#endif
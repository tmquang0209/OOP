#include <iostream>
#include <string.h>
#include "Employee.h"
#ifndef PAYROLLSTAFF_H
#define PAYROLLSTAFF_H
class PayrollStaff : public Employee
{
private:
    /*
    + salary : double
    */
    double salary;

public:
    PayrollStaff();
    PayrollStaff(string employeeID, string name, int taxCode, double salary);
    void setSalary(double salary);
    double getSalary();
    void print();
};
#endif
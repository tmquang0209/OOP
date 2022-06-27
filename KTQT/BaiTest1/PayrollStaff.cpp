#include <iostream>
#include <string>
#include "PayrollStaff.h"

using namespace std;

PayrollStaff::PayrollStaff() : Employee()
{
    salary = 0;
}

PayrollStaff::PayrollStaff(string employeeID, string name, int taxCode,
                           double salary) : Employee(employeeID, name, taxCode)
{
    this->salary = salary;
}

void PayrollStaff::setSalary(double salary)
{
    this->salary = salary;
}

double PayrollStaff::getSalary()
{
    return salary;
}

void PayrollStaff::print()
{
    Employee::print();
    cout << "Salary: " << salary << endl;
}
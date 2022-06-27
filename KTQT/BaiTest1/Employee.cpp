#include <iostream>
#include <string.h>
#include "Employee.h"

using namespace std;

Employee::Employee()
{
    employeeID = "";
    name = "";
    taxCode = 0;
}

Employee::Employee(string employeeID, string name, int taxCode)
{
    this->employeeID = employeeID;
    this->name = name;
    this->taxCode = taxCode;
}

string Employee::getEmployeeID() const
{
    return employeeID;
}

string Employee::getName() const
{
    return name;
}

int Employee::getTaxCode() const
{
    return taxCode;
}

void Employee::print()
{
    cout << "Employee ID: " << employeeID << endl;
    cout << "Name: " << name << endl;
    cout << "Tax code: " << taxCode << endl;
}
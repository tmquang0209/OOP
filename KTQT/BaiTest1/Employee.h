#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    /*
    + employeeID : string
    + name : string
    + taxCode : int
    */
    string employeeID;
    string name;
    int taxCode;

public:
    Employee();
    Employee(string employeeID, string name, int taxCode);
    string getEmployeeID() const;
    string getName() const;
    int getTaxCode() const;
    virtual double getSalary() = 0;
    virtual void print();
};
#endif
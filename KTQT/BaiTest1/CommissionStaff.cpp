#include <iostream>
#include <string.h>
#include "CommissionStaff.h"

CommissionStaff::CommissionStaff() : Employee()
{
    turnover = 0;
    discount = 0;
}

CommissionStaff::CommissionStaff(string employeeID, string name,
                                 int taxCode, double turnover, double discount) : Employee(employeeID, name, taxCode)
{
    this->turnover = turnover;
    this->discount = discount;
}

void CommissionStaff::setTurnover(double turnover)
{
    this->turnover = turnover;
}

void CommissionStaff::setDiscount(double discount)
{
    this->discount = discount;
}

double CommissionStaff::getTurnover() const
{
    return turnover;
}

double CommissionStaff::getDiscount() const
{
    return discount;
}

double CommissionStaff::getSalary()
{
    return turnover * (1 - discount / 100);
}

void CommissionStaff::print()
{
    Employee::print();
    cout << "Turnover: " << turnover << endl;
    cout << "Discount: " << discount << endl;
}
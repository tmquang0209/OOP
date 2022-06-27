#include <iostream>
#include <string.h>
#include "SpecialCommissionStaff.h"

SpecialCommissionStaff::SpecialCommissionStaff() : Employee()
{
    turnover = 0;
    discount = 0;
    basicSalary = 0;
}

SpecialCommissionStaff::SpecialCommissionStaff(string employeeID, string name,
                                               int taxCode, double turnover, double discount, double basicSalary) : Employee(employeeID, name, taxCode)
{
    this->turnover = turnover;
    this->discount = discount;
    this->basicSalary = basicSalary;
}

void SpecialCommissionStaff::setTurnover(double turnover)
{
    this->turnover = turnover;
}

void SpecialCommissionStaff::setDiscount(double discount)
{
    this->discount = discount;
}

void SpecialCommissionStaff::setBasicSalary(double basicSalary)
{
    this->basicSalary = basicSalary;
}

double SpecialCommissionStaff::getTurnover() const
{
    return turnover;
}

double SpecialCommissionStaff::getDiscount() const
{
    return discount;
}

double SpecialCommissionStaff::getBasicSalary() const
{
    return basicSalary;
}

double SpecialCommissionStaff::getSalary()
{
    return turnover * (1 - discount / 100) + basicSalary;
}

void SpecialCommissionStaff::print()
{
    Employee::print();
    cout << "Turnover: " << turnover << endl;
    cout << "Discount: " << discount << endl;
    cout << "Basic Salary: " << basicSalary << endl;
}
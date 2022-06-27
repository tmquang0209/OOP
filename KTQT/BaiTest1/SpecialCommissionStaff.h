#include <iostream>
#include <string.h>
#include "Employee.h"
#ifndef SPECIALCOMMISSIONSTAFF_H
#define SPECIALCOMMISSIONSTAFF_H
class SpecialCommissionStaff : public Employee
{
    /*
    + turnover : double
    + discount : double
    + basicSalary : double
    */
    double turnover;
    double discount;
    double basicSalary;

public:
    SpecialCommissionStaff();
    SpecialCommissionStaff(string, string, int, double, double, double);
    void setTurnover(double);
    void setDiscount(double);
    void setBasicSalary(double);
    double getTurnover() const;
    double getDiscount() const;
    double getBasicSalary() const;
    double getSalary();
    void print();
};
#endif
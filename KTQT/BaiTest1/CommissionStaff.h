#include <iostream>
#include <string.h>
#include "Employee.h"
#ifndef COMMISSIONSTAFF_H
#define COMMISSIONSTAFF_H
class CommissionStaff : public Employee
{
private:
    /*
    + turnover : double
    + discount : double
    */
    double turnover;
    double discount;

public:
    CommissionStaff();
    CommissionStaff(string, string, int, double, double);
    void setTurnover(double);
    void setDiscount(double discount);
    double getTurnover() const;
    double getDiscount() const;
    double getSalary();
    void print();
};
#endif
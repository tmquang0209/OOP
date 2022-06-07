#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"
class ShiftSupervisor : public Employee
{
private:
    double salary;
    double annualBonus;
    int workingMonth;

public:
    ShiftSupervisor();
    ShiftSupervisor(string name, int id, string date, double salary, int workingMonth);
    void setSalary(double salary);
    void setAnnualBonus();
    void setWorkingMonth(int workingMonth);
    double getSalary() const;
    double getAnnualBonus() const;
    int getWorkingMonth() const;
    void print();
};
#endif
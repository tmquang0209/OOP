#include <iostream>
#include "ShiftSupervisor.h"

ShiftSupervisor::ShiftSupervisor() : Employee()
{
    salary = 0;
    annualBonus = 0;
    workingMonth = 0;
}

ShiftSupervisor::ShiftSupervisor(string name, int id, string date, double salary, int workingMonth) : Employee(name, id, date)
{
    this->salary = salary;
    this->workingMonth = workingMonth;
    setAnnualBonus();
}

void ShiftSupervisor::setSalary(double salary)
{
    this->salary = salary;
    setAnnualBonus();
}

void ShiftSupervisor::setWorkingMonth(int workingMonth)
{
    this->workingMonth = workingMonth;
    setAnnualBonus();
}

void ShiftSupervisor::setAnnualBonus()
{
    annualBonus = salary * 3 * workingMonth / 12;
}

double ShiftSupervisor::getSalary() const
{
    return salary;
}

int ShiftSupervisor::getWorkingMonth() const
{
    return workingMonth;
}

double ShiftSupervisor::getAnnualBonus() const
{
    return annualBonus;
}

void ShiftSupervisor::print()
{
    Employee::print();
    cout << "Salary: " << salary << endl;
    cout << "Working month: " << workingMonth << endl;
    cout << "Annual bonus: " << annualBonus << endl;
}
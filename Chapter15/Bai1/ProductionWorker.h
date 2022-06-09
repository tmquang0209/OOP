#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
class ProductionWorker : public Employee
{
private:
    int shift;
    double hourlyPayRate;
    double salary;
    int workingDays;

public:
    ProductionWorker();
    ProductionWorker(string name, int id, Date date, int shift, double hourlyPayRate, int workingDays);
    void setShift(int shift);
    void setWorkingDays(int workingDays);
    void setSalary();
    void setHourlyPayRate(double hourlyPayRate);
    int getShift() const;
    double getHourlyPayRate() const;
    double getSalary() const;
    int getWorkingDays() const;
    void print();
};
#endif
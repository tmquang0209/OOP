#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
class ProductionWorker : public Employee
{
private:
    int shift;
    double hourlyPayRate;

public:
    ProductionWorker();
    ProductionWorker(string name, int id, string date, int shift, double hourlyPayRate);
    void setShift(int shift);
    void setHourlyPayRate(double hourlyPayRate);
    int getShift() const;
    double getHourlyPayRate() const;
    void print();
};
#endif
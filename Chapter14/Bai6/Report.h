#include "TimeOff.h"
#ifndef REPORT_H
#define REPORT_H
class Report
{
private:
    int month;
    TimeOff maxSickDay, maxVacation;

public:
    Report();
    Report(int month);
    void setMonth(int month);
    int getMonth();
    void print();
    friend istream &operator>>(istream &, Report &);
    friend ostream &operator<<(ostream &, Report &);
};
#endif
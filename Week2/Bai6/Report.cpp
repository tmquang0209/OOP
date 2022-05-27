#include <iostream>
#include "Report.h"
#include "TimeOff.h"
#include "NumDays.h"

using namespace std;

const int HOURS_OF_VACATION = 12;
const int HOURS_OF_SICK_LEAVE = 8;

Report::Report()
{
    this->month = 0;
}

Report::Report(int month)
{
    this->month = month;
}

void Report::setMonth(int month)
{
    this->month = month;
    this->maxSickDay.setMaxSickDays(month * HOURS_OF_SICK_LEAVE);
    this->maxVacation.setMaxVacation(month * HOURS_OF_VACATION);
}

int Report::getMonth()
{
    return this->month;
}

void Report::print()
{
    cout << "Month: " << this->month << endl;
    cout << "Max Sick Day: " << this->maxSickDay.getMaxSickDays() << endl;
    cout << "Max Vacation: " << this->maxVacation.getMaxVacation() << endl;
}

istream &operator>>(istream &is, Report &r)
{
    cout << "Nhap so thang: ";
    is >> r.month;
    r.maxSickDay.setMaxSickDays(r.month * HOURS_OF_SICK_LEAVE);
    r.maxVacation.setMaxVacation(r.month * HOURS_OF_VACATION);
    return is;
}

ostream &operator<<(ostream &os, Report &r)
{
    os << "Month: " << r.month << endl;
    os << "Max Sick Day: " << r.maxSickDay.getMaxSickDays() << endl;
    os << "Max Vacation: " << r.maxVacation.getMaxVacation() << endl;
    return os;
}
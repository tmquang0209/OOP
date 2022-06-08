#include "string"
#include "NumDays.h"
using namespace std;
#ifndef TIMEOFF_H
#define TIMEOFF_H
class TimeOff
{
private:
    int id;
    string name;
    NumDays maxSickDays, sickTaken,
        maxVacation, vacTaken,
        maxUnpaid, unpaidTaken;

public:
    TimeOff();
    TimeOff(int, string, double, double, double, double, double, double);
    void setID(int);
    void setName(string);
    void setMaxSickDays(double);
    void setSickTaken(double);
    void setMaxVacation(double);
    void setMaxVacTaken(double);
    void setMaxUnpaid(double);
    void setUnpaidTaken(double);
    int getID() const;
    string getName() const;
    double getMaxSickDays();
    double getSickTaken();
    double getMaxVacation();
    double getMaxVacTaken();
    double getMaxUnpaid();
    double getUnpaidTaken();
    friend istream &operator>>(istream &, TimeOff &);
    friend ostream &operator<<(ostream &, TimeOff &);
};
#endif
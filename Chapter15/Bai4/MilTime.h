#ifndef MILTIME_H
#define MILTIME_H
#include <iostream>
#include "Time.h"
using namespace std;

class MilTime : public Time
{
private:
    int milHour;
    int milMinute;
    int milSec;
    int type; // type = 1: am , type = 2: pm

public:
    MilTime();
    MilTime(int h, int m, int s);
    void setTime(int hour, int minute, int sec);
    int getMilHour() const;
    int getMilMinute() const;
    int getMilSec() const;
    int getType() const;
    void print() const;
    friend istream &operator>>(istream &, MilTime &);
    friend ostream &operator<<(ostream &, MilTime &);
};
#endif
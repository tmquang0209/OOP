#ifndef TIMECLOCK_H
#define TIMECLOCK_H
#include "MilTime.h"
class TimeClock : public MilTime
{
public:
    TimeClock();
    TimeClock(int h, int m, int s);
    void setTime(int h, int m, int s);
    void elapsedTime(TimeClock, TimeClock);
    friend istream &operator>>(istream &is, TimeClock &obj);
    friend ostream &operator<<(ostream &os, TimeClock &obj);
};
#endif
#include <iostream>
#include "MilTime.h"
#include "TimeClock.h"

TimeClock::TimeClock() : MilTime()
{
}

TimeClock::TimeClock(int h, int m, int s) : MilTime(h, m, s)
{
}

void TimeClock::setTime(int h, int m, int s)
{
    MilTime::setTime(h, m, s);
}

void TimeClock::elapsedTime(TimeClock t1, TimeClock t2)
{
    int hour, minute, sec;
    // if (t1.getHour() + 1 == t2.getHour())
    // {
    //     minute = 60 - t1.getMinute() + t2.getMinute();
    //     if (t1.getSec() != t2.getSec())
    //     {
    //         sec = 60 - t1.getSec() + t2.getSec();
    //         minute--;
    //     }
    //     else
    //         sec = 0;

    //     if (minute >= 60)
    //     {
    //         hour = minute / 60;
    //         minute = minute % 60;
    //     }
    // }
    // else
    // {
    hour = t2.getHour() - t1.getHour() - 1;
    minute = 60 - t1.getMinute() + t2.getMinute();
    if (t1.getSec() != t2.getSec())
    {
        if (t1.getSec() == 0)
            sec = t2.getSec();
        else
        {
            sec = 60 - t1.getSec() + t2.getSec();
            minute--;
        }

        if (sec >= 60)
        {
            minute++;
            sec = sec % 60;
        }
    }
    else
        sec = 0;

    if (minute >= 60)
    {
        hour += minute / 60;
        minute = minute % 60;
    }
    // }
    cout << t1 << " den " << t2 << " = " << hour << ":" << minute << ":" << sec << endl;
}

istream &operator>>(istream &is, TimeClock &obj)
{
    do
    {
        cout << "Nhap gio: ";
        is >> obj.hour;
        if (obj.hour < 0 || obj.hour > 23)
            cout << "Nhap gio trong khoang [0-23]!" << endl;
    } while (obj.hour < 0 || obj.hour > 23);

    do
    {
        cout << "Nhap phut: ";
        is >> obj.min;
        if (obj.min < 0 || obj.min > 59)
            cout << "Nhap phut trong khoang [0-59]!" << endl;
    } while (obj.min < 0 || obj.min > 59);

    do
    {
        cout << "Nhap giay: ";
        is >> obj.sec;
        if (obj.sec < 0 || obj.sec > 59)
            cout << "Nhap giay trong khoang [0-59]!" << endl;
    } while (obj.sec < 0 || obj.sec > 59);
    obj.setTime(obj.hour, obj.min, obj.sec);
    return is;
}

ostream &operator<<(ostream &os, TimeClock &obj)
{
    os << obj.getMilHour() << ":" << obj.getMilMinute() << ":" << obj.getMilSec();
    if (obj.getType() == 2)
        cout << " pm";
    else
        cout << " am";
    return os;
}
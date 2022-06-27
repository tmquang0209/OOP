#include <iostream>
#include "MilTime.h"

MilTime::MilTime() : Time()
{
    milHour = 0;
    milMinute = 0;
    milSec = 0;
}

MilTime::MilTime(int h, int m, int s) : Time(h, m, s)
{
    setTime(h, m, s);
}

void MilTime::setTime(int hour, int minute, int sec)
{
    milHour = (hour > 12) ? hour % 12 : hour;
    milMinute = minute;
    milSec = sec;
    type = (hour > 12) ? 2 : 1;
}

int MilTime::getMilHour() const
{
    return milHour;
}

int MilTime::getMilMinute() const
{
    return milMinute;
}

int MilTime::getMilSec() const
{
    return milSec;
}

int MilTime::getType() const
{
    return type;
}

istream &operator>>(istream &is, MilTime &obj)
{
    do
    {
        cout << "Nhap gio: ";
        is >> obj.hour;
        if (obj.hour < 0 || obj.hour > 23)
            cout << "Nhap gio trong khoang [0-23]! Nhap lai";
    } while (obj.hour < 0 || obj.hour > 23);

    do
    {
        cout << "Nhap phut: ";
        is >> obj.min;
        if (obj.min < 0 || obj.min > 59)
            cout << "Nhap phut trong khoang [0-59]! Nhap lai";
    } while (obj.min < 0 || obj.min > 59);

    do
    {
        cout << "Nhap giay: ";
        is >> obj.sec;
        if (obj.sec < 0 || obj.sec > 59)
            cout << "Nhap giay trong khoang [0-59]! Nhap lai";
    } while (obj.sec < 0 || obj.sec > 59);
    obj.setTime(obj.hour, obj.min, obj.sec);
    return is;
}

ostream &operator<<(ostream &os, MilTime &obj)
{
    os << obj.getMilHour() << ":" << obj.getMilMinute() << ":" << obj.getMilSec();
    if (obj.getType() == 2)
        cout << " pm";
    else
        cout << " am";
    cout << endl;
    return os;
}
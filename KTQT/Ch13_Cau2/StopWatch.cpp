#include <iostream>
#include "StopWatch.h"

using namespace std;

StopWatch::StopWatch()
{
    hour = 0;
    minute = 0;
    second = 0;
}

StopWatch::StopWatch(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
    normalize();
}

void StopWatch::normalize()
{
    minute += second / 60;
    second %= 60;
    hour += minute / 60;
    minute %= 60;
}

void StopWatch::setSecond(int s)
{
    second = s;
    normalize();
}

float StopWatch::getHour() const
{
    return hour + minute / 60.0 + second / 3600.0;
}

void StopWatch::run(int x)
{
    second += x;
    normalize();
}

void StopWatch::print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}
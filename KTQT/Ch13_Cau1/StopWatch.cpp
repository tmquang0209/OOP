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

int StopWatch::getSecond() const
{
    return hour * 3600 + minute * 60 + second;
}

void StopWatch::print()
{
    cout << hour << ":" << minute << ":" << second << endl;
}
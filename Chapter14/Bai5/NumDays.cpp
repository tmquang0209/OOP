#include <iostream>
#include "NumDays.h"

using namespace std;

const int HOURS_PER_DAYS = 8;

NumDays::NumDays()
{
    hours = 0;
    days = 0;
}

NumDays::NumDays(int hours)
{
    this->hours = hours;
    days = (double)hours / HOURS_PER_DAYS;
}

NumDays::NumDays(int days, double hours)
{
    this->days = days;
    this->hours = hours;
}

void NumDays::setHours(int hours)
{
    this->hours = hours;
    setDays();
}

void NumDays::setDays()
{
    days = (double)hours / HOURS_PER_DAYS;
}

int NumDays::getHours() const
{
    return hours;
}

double NumDays::getDays() const
{
    return days;
}

NumDays NumDays::operator+(NumDays other)
{
    NumDays result;
    result = hours + other.hours;
    return result;
}

NumDays NumDays::operator-(NumDays other)
{
    NumDays result;
    result = hours - other.hours;
    return result;
}

NumDays NumDays::operator++(int)
{
    hours++;
    setDays();
    return hours;
}

NumDays NumDays::operator++()
{
    ++hours;
    setDays();
    return hours;
}

NumDays NumDays::operator--(int)
{
    hours--;
    setDays();
    return hours;
}
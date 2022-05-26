#include <iostream>
#include "NumDays.h"

using namespace std;

NumDays::NumDays()
{
    hours = 0;
    days = 0;
}

NumDays::NumDays(int hours)
{
    this->hours = hours;
    days = 0;
}

NumDays::NumDays(int days, int hours)
{
    this->days = days;
    this->hours = hours;
}

void NumDays::setHours(int hours)
{
    this->hours = hours;
}

void NumDays::setDays(int days)
{
    this->days = days;
}

int NumDays::getHours() const
{
    return hours;
}

int NumDays::getDays() const
{
    return days;
}

NumDays NumDays::operator+(NumDays other){

}
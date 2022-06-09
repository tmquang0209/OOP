#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

Date::Date()
{
    day = 0;
    month = 0;
    year = 0;
}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::setDate(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

string Date::getDate() const
{
    return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

istream &operator>>(istream &is, Date &obj)
{
    cout << "Day: ";
    is >> obj.day;
    cout << "Month: ";
    is >> obj.month;
    cout << "Year: ";
    is >> obj.year;
    return is;
}

ostream &operator<<(ostream &os, Date &obj)
{
    os << obj.day << "/" << obj.month << "/" << obj.year;
    return os;
}
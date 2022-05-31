#include <iostream>
#include "DayOfYear.h"

using namespace std;

DayOfYear::DayOfYear()
{
    this->day = 1;
    this->month = "";
}

DayOfYear::DayOfYear(int day, string month)
{
    this->day = day;
    this->month = month;
}

void DayOfYear::setDay(int day)
{
    this->day = day;
}

void DayOfYear::setMonth(string month)
{
    this->month = month;
}

int DayOfYear::getDay() const
{
    return day;
}

string DayOfYear::getMonth() const
{
    return month;
}

DayOfYear DayOfYear::operator++(int)
{
    DayOfYear temp = *this;
    temp.day = day++;
    return temp;
}

DayOfYear DayOfYear::operator++()
{
    ++day;
    return *this;
}

DayOfYear DayOfYear::operator--(int)
{
    day -= 1;
    return *this;
}

DayOfYear DayOfYear::operator--()
{
    day -= 1;
    return *this;
}

void DayOfYear::display()
{
    string newMonth;
    int newDay;
    int dayLimit = getDayLimit();
    if (day == dayLimit + 1)
    {
        if (month == "January")
            newMonth = "February";
        else if (month == "February")
            newMonth = "March";
        else if (month == "March")
            newMonth = "April";
        else if (month == "April")
            newMonth = "May";
        else if (month == "May")
            newMonth = "June";
        else if (month == "June")
            newMonth = "July";
        else if (month == "July")
            newMonth = "August";
        else if (month == "August")
            newMonth = "September";
        else if (month == "September")
            newMonth = "October";
        else if (month == "October")
            newMonth = "November";
        else if (month == "November")
            newMonth = "December";
        else if (month == "December")
            newMonth = "January";
        newDay = 1;
    }
    else
    {
        newDay = day;
        newMonth = month;
    }
    if (day == 0)
    {
        if (month == "January")
        {
            newMonth = "December";
            newDay = 31;
        }
        else if (month == "February")
        {
            newMonth = "January";
            newDay = 31;
        }
        else if (month == "March")
        {
            newMonth = "February";
            newDay = 28;
        }
        else if (month == "April")
        {
            newMonth = "March";
            newDay = 31;
        }
        else if (month == "May")
        {
            newMonth = "April";
            newDay = 30;
        }
        else if (month == "June")
        {
            newMonth = "May";
            newDay = 31;
        }
        else if (month == "July")
        {
            newMonth = "June";
            newDay = 30;
        }
        else if (month == "August")
        {
            newMonth = "July";
            newDay = 31;
        }
        else if (month == "September")
        {
            newMonth = "August";
            newDay = 30;
        }
        else if (month == "October")
        {
            newMonth = "September";
            newDay = 31;
        }
        else if (month == "November")
        {
            newMonth = "October";
            newDay = 30;
        }
        else if (month == "December")
        {
            newMonth = "November";
            newDay = 31;
        }
    }
    cout << newDay << " " << newMonth << endl;
}

int DayOfYear::getDayLimit() const
{

    int dayLimit;
    if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "October" || month == "December")
        dayLimit = 31;
    else if (month == "April" || month == "June" || month == "September" || month == "November")
        dayLimit = 30;
    else if (month == "February")
        dayLimit = 28;
    return dayLimit;
}

DayOfYear::~DayOfYear()
{
}
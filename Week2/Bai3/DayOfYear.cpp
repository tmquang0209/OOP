#include <iostream>
#include "DayOfYear.h"

using namespace std;

DayOfYear::DayOfYear()
{
    this->day = 1;
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

void DayOfYear::display()
{
    int dayLimit = getDayLimit();
    if (day < 0 || day > dayLimit)
        cout << "Ngay khong hop le" << endl;
    else
    {
        day++;
        getDayMonth();
    }
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

void DayOfYear::getDayMonth() const
{
    if (day > 0 && day <= 31)
        cout << "January " << day;
    else if (day <= 59)
        cout << "February " << day - 31;
    else if (day <= 90)
        cout << "March " << day - 59;
    else if (day <= 120)
        cout << "April " << day - 90;
    else if (day <= 151)
        cout << "May " << day - 120;
    else if (day <= 181)
        cout << "June " << day - 151;
    else if (day <= 212)
        cout << "July " << day - 181;
    else if (day <= 243)
        cout << "August " << day - 212;
    else if (day <= 273)
        cout << "September " << day - 243;
    else if (day <= 304)
        cout << "October " << day - 273;
    else if (day <= 334)
        cout << "November " << day - 304;
    else if (day <= 365)
        cout << "December " << day - 334;
    else
        cout << "Gia tri khong hop le!";
}

DayOfYear::~DayOfYear()
{
}
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

void DayOfYear::display()
{
    int dayLimit = getDayLimit();
    if (day < 0 || day > dayLimit)
        cout << "Ngay khong hop le" << endl;
    else
    {
        day++;
        if (day == dayLimit + 1)
        {
            if (month == "January")
                cout << "February 1";
            else if (month == "February")
                cout << "March 1";
            else if (month == "March")
                cout << "April 1";
            else if (month == "April")
                cout << "May 1";
            else if (month == "May")
                cout << "June 1";
            else if (month == "June")
                cout << "July 1";
            else if (month == "July")
                cout << "August 1";
            else if (month == "August")
                cout << "September 1";
            else if (month == "September")
                cout << "October 1";
            else if (month == "October")
                cout << "November 1";
            else if (month == "November")
                cout << "December 1";
            else if (month == "December")
                cout << "January 1";
            else
                cout << "Ngay khong hop le";
        }
        else
        {
            cout << month << " " << day << endl;
        }
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

// void DayOfYear::getDayMonth() const
// {
//     if (day > 0 && day <= 31)
//         cout << "January " << day;
//     else if (day <= 59)
//         cout << "February " << day - 31;
//     else if (day <= 90)
//         cout << "March " << day - 59;
//     else if (day <= 120)
//         cout << "April " << day - 90;
//     else if (day <= 151)
//         cout << "May " << day - 120;
//     else if (day <= 181)
//         cout << "June " << day - 151;
//     else if (day <= 212)
//         cout << "July " << day - 181;
//     else if (day <= 243)
//         cout << "August " << day - 212;
//     else if (day <= 273)
//         cout << "September " << day - 243;
//     else if (day <= 304)
//         cout << "October " << day - 273;
//     else if (day <= 334)
//         cout << "November " << day - 304;
//     else if (day <= 365)
//         cout << "December " << day - 334;
//     else
//         cout << "Gia tri khong hop le!";
// }

DayOfYear::~DayOfYear()
{
}
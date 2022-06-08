#include <iostream>
#include "Date.h"

using namespace std;

void Date::setDay(int days)
{
    if (days < 1 || days > 31)
        day = -1;
    else
        day = days;
}

void Date::setMonth(int months)
{
    if (months < 1 || months > 12)
        month = -1;
    else
        month = months;
}

void Date::setYear(int years)
{
    if (years < 0)
        year = -1;
    else
        year = years;
}

int Date::getDay() const
{
    return day;
}

int Date::getMonth() const
{
    return month;
}

int Date::getYear() const
{
    return year;
}

void Date::output1() const
{
    cout << day << "/" << month << "/" << year << endl;
}

void Date::output2() const
{
    cout << "Ngay " << day << " thang " << month << " nam " << year << endl;
}

Date::~Date()
{
    cout << "Huy tu thanh cong." << endl;
}

int main()
{
    Date date1, date2;
    date1.setDay(31);
    date1.setMonth(1);
    date1.setYear(2022);
    if (date1.getDay() == -1 || date1.getMonth() == -1 || date1.getYear() == -1)
        cout << "Ngay nhap vao khong hop le!" << endl;
    else
    {
        date1.output1();
        date1.output2();
    }
    return 0;
}
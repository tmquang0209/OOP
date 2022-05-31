#include <iostream>
#include "Date.h"

using namespace std;

Date::Date()
{
    day = 1;
    month = 1;
    year = 2000;
}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

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

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

bool Date::isLeapYear()
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;
    else
        return false;
}

void Date::swapDate(Date &date2, Date &dateMax, Date &dateMin)
{
    if (this->year > date2.year)
    {
        dateMax = *this;
        dateMin = date2;
    }
    else if (this->year < date2.year)
    {
        dateMax = date2;
        dateMin = *this;
    }
    else
    {
        if (this->month > date2.month)
        {
            dateMax = *this;
            dateMin = date2;
        }
        else if (this->month < date2.month)
        {
            dateMax = date2;
            dateMin = *this;
        }
        else
        {
            if (this->day > date2.day)
            {
                dateMax = *this;
                dateMin = date2;
            }
            else
            {
                dateMax = date2;
                dateMin = *this;
            }
        }
    }
}

int Date::calcGap(int gap, Date &dateMax, Date &dateMin)
{
    if (dateMax.month > 1) // Dem so ngay tu thang 1 -> dateMax.month
    {
        for (int i = 1; i < dateMax.month; i++)
        {
            gap += dayOfMonth(i);
        }
    }
    if (dateMin.month < 12) // Dem so ngay tu dateMin.month -> thang 12;
    {
        int count = 0;
        for (int i = dateMin.month + 1; i <= 12; i++)
        {
            gap += dayOfMonth(i);
        }
    }
    return gap;
}

int Date::dayOfMonth(int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (month == 2)
        return (isLeapYear()) ? 29 : 28;
    else
        return -1;
}

Date Date::operator++()
{
    Date temp = *this;
    ++day;
    if (day > dayOfMonth(month))
    {
        day = 1;
        ++month;
        if (month > 12)
        {
            month = 1;
            ++year;
        }
    }
    return temp;
}

Date Date::operator++(int)
{
    Date temp = *this;
    temp.day = this->day++;
    if (temp.day > dayOfMonth(temp.month))
    {
        temp.day = 1;
        temp.month++;
        if (temp.month > 12)
        {
            temp.month = 1;
            temp.year++;
        }
    }
    return temp;
}

Date Date::operator--()
{
    --day;
    if (day < 1)
    {
        day = dayOfMonth(month);
        --month;
        if (month < 1)
        {
            month = 12;
            --year;
        }
    }
    return *this;
}

Date Date::operator--(int)
{
    Date temp = *this;
    temp.day = this->day--;
    if (temp.day < 1)
    {
        temp.day = dayOfMonth(temp.month);
        temp.month--;
        if (temp.month < 1)
        {
            temp.month = 12;
            temp.year--;
        }
    }
    return temp;
}

Date Date::operator-(Date &date2)
{
    Date temp;
    // So sanh ngay lon hon
    Date dateMax, dateMin;
    swapDate(date2, dateMax, dateMin);
    // Het so sanh
    int gap = 0;
    if (dateMax.year == dateMin.year)
    {
        if (dateMax.month == dateMin.month)
        {
            gap = dateMax.day - dateMin.day;
        }
        else
        {
            if (dateMax.month - dateMin.month > 1)
            {
                for (int i = dateMin.month + 1; i < dateMax.month; i++)
                {
                    gap += dayOfMonth(i);
                }
            }
            gap += day + dayOfMonth(dateMin.month) - dateMin.day;
        }
    }
    else
    {
        if (dateMax.year - dateMin.year > 1) // Example: 2020 - 2022, 2018 - 2022
        {
            for (int i = dateMin.year + 1; i < dateMax.year; i++)
            {
                if (isLeapYear())
                    gap += 366;
                else
                    gap += 365;
            }
            gap = calcGap(gap, dateMax, dateMin);
            gap += dateMax.day + dayOfMonth(dateMin.month) - dateMin.day + 1;
        }
        else // Example: 2020 - 2021, 2021 - 2022
        {
            gap = calcGap(gap, dateMax, dateMin);
            gap += dateMax.day + dayOfMonth(dateMin.month) - dateMin.day;
        }
    }
    temp.day = gap;
    return temp;
}

istream &operator>>(istream &is, Date &d)
{
    cout << "Nhap ngay: ";
    is >> d.day;
    cout << "Nhap thang: ";
    is >> d.month;
    cout << "Nhap nam: ";
    is >> d.year;
    return is;
}

ostream &operator<<(ostream &os, Date &d)
{
    string monthName[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    os << monthName[d.month - 1] << " " << d.day << ", " << d.year;
    return os;
}

Date::~Date()
{
}
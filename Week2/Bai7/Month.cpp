#include <iostream>
#include "Month.h"

using namespace std;

Month::Month()
{
    this->name = "January";
    this->monthNumber = 1;
}

Month::Month(string name)
{
    this->name = name;
    convertNameToNum();
}

Month::Month(int monthNumber)
{
    this->monthNumber = monthNumber;
    convertNumToName(*this);
}

void Month::convertNumToName(Month &obj)
{
    switch (obj.monthNumber)
    {
    case 1:
        name = "January";
        break;
    case 2:
        name = "February";
        break;
    case 3:
        name = "March";
        break;
    case 4:
        name = "April";
        break;
    case 5:
        name = "May";
        break;
    case 6:
        name = "June";
        break;
    case 7:
        name = "July";
        break;
    case 8:
        name = "August";
        break;
    case 9:
        name = "September";
        break;
    case 10:
        name = "October";
        break;
    case 11:
        name = "November";
        break;
    case 12:
        name = "December";
        break;
    default:
        name = "NULL";
    }
}

void Month::convertNameToNum()
{
    if (name == "January")
        this->monthNumber = 1;
    else if (name == "February")
        this->monthNumber = 2;
    else if (name == "March")
        this->monthNumber = 3;
    else if (name == "April")
        this->monthNumber = 4;
    else if (name == "May")
        this->monthNumber = 5;
    else if (name == "June")
        this->monthNumber = 6;
    else if (name == "July")
        this->monthNumber = 7;
    else if (name == "August")
        this->monthNumber = 8;
    else if (name == "September")
        this->monthNumber = 9;
    else if (name == "October")
        this->monthNumber = 10;
    else if (name == "November")
        this->monthNumber = 11;
    else if (name == "December")
        this->monthNumber = 12;
    else
        this->monthNumber = -1;
}

void Month::setName(string name)
{
    this->name = name;
}

void Month::setMonthNumber(int monthNumber)
{
    this->monthNumber = monthNumber;
}

string Month::getName() const
{
    return this->name;
}

int Month::getMonthNumber() const
{
    return this->monthNumber;
}

Month Month::operator++(int)
{
    Month temp;
    temp.monthNumber = this->monthNumber++;
    if (temp.monthNumber == 13)
        temp.monthNumber = 1;
    convertNumToName(temp);
    return temp;
}

Month Month::operator++()
{
    ++monthNumber;
    convertNumToName(*this);
    return *this;
}

Month Month::operator--(int)
{
    Month temp;
    temp.monthNumber = this->monthNumber--;
    if (temp.monthNumber == 0)
        temp.monthNumber = 12;
    convertNumToName(temp);
    return temp;
}

Month Month::operator--()
{
    --monthNumber;
    convertNumToName(*this);
    return *this;
}
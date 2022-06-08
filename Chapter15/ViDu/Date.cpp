#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

Date::Date()
{
    date = "";
}

Date::Date(string d)
{
    date = d;
}

void Date::setDate(string d)
{
    date = d;
}

string Date::getDate() const
{
    return date;
}
#include <iostream>
#include <string.h>
#include "numbers.h"

using namespace std;

Numbers::Numbers()
{
    this->number = 0;
}

Numbers::Numbers(int number)
{
    this->number = number;
}

void Numbers::setNumber(int number)
{
    this->number = number;
}

int Numbers::getNumber() const
{
    return this->number;
}

void Numbers::print()
{
    string lessThan20[20] = {"zero", "one", "two", "three", "four", "five",
                             "six", "seven", "eight", "nine", "ten", "eleven",
                             "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                             "seventeen", "eighteen", "nineteen"};
    string tens[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "nighty"};
    string hundred = "hundred";
    string thousand = "thousand";
    if (number >= 1000)
    {
        cout << lessThan20[number / 1000] << " " << thousand << " ";
        number %= 1000;
    }
    if (number >= 100)
    {
        cout << lessThan20[number / 100] << " " << hundred << " ";
        number %= 100;
    }
    if (number >= 20)
    {
        cout << tens[number / 10 - 2] << " ";
        if (number % 10 != 0)
            cout << lessThan20[number % 10] << " ";
    }
    else
    {
        cout << lessThan20[number] << " ";
    }
}

Numbers::~Numbers()
{
}
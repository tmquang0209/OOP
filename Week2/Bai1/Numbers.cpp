#include <iostream>
#include <string>
#include "numbers.h"

using namespace std;

string Numbers::lessThan20[] = {"zero", "one", "two", "three", "four", "five",
                                "six", "seven", "eight", "nine", "ten", "eleven",
                                "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                                "seventeen", "eighteen", "nineteen"};
string Numbers::tens[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "nighty"};
string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

Numbers::Numbers(int number)
{
    if (number < 0 || number > 9999)
        cout << "Invalid number!" << endl;
    else
        this->number = number;
}

void Numbers::print()
{
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
#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    Date(){};
    Date(int _day, int _month, int _year)
    {
        day = _day;
        month = _month;
        year = _year;
    }

    void print()
    {
        cout << day << "/" << month << "/" << year << endl;
    }

    Date operator+(int x)
    {
        Date date;
        date.day = day + x;
        date.month = month;
        date.year = year;
        while (date.day > 30)
        {

            date.day -= 30;
            date.month++;

            if (date.month > 12)
            {
                date.month = 1;
                date.year++;
            }
        }
        return date;
    }
};
#endif
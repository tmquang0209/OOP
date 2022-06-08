#include <iostream>

using namespace std;

#ifndef DATE_H
#define DATE_H
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(int, int, int);
    void setDay(int days);
    void setMonth(int months);
    void setYear(int years);
    int getDay();
    int getMonth();
    int getYear();
    bool isLeapYear();
    void swapDate(Date &, Date &, Date &);
    int calcGap(int, Date &, Date &);
    int dayOfMonth(int);
    Date operator++();
    Date operator++(int);
    Date operator--();
    Date operator--(int);
    Date operator-(Date &);
    friend istream &operator>>(istream &, Date &);
    friend ostream &operator<<(ostream &, Date &);
    ~Date();
};
#endif
#include "string"
using namespace std;
#ifndef MONTH_H
#define MONTH_H

class Month
{
private:
    string name;
    int monthNumber;

public:
    Month();
    Month(string);
    Month(int);
    void convertNumToName(Month &);
    void convertNameToNum();
    void setName(string);
    string getName() const;
    void setMonthNumber(int);
    int getMonthNumber() const;
    Month operator++();
    Month operator++(int);
    Month operator--();
    Month operator--(int);
    friend istream &operator>>(istream &is, Month &month);
    friend ostream &operator<<(ostream &os, Month &month);
};
#endif
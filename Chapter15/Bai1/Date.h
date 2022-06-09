#include <iostream>
#include <string>
using namespace std;
#ifndef DATE_H
#define DATE_H
class Date
{
private:
    int day, month, year;

public:
    Date();
    Date(int, int, int);
    void setDate(int, int, int);
    string getDate() const;
    friend istream &operator>>(istream &, Date &);
    friend ostream &operator<<(ostream &, Date &);
};
#endif
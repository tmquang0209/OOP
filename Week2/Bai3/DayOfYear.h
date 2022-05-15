#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>
using namespace std;
class DayOfYear
{
private:
    int day;
    string month;

public:
    DayOfYear();
    DayOfYear(int year, string month);
    void setDay(int day);
    void setMonth(string month);
    int getDay() const;
    string getMonth() const;
    void display();
    //    void getDayMonth() const;
    int getDayLimit() const;
    ~DayOfYear();
};
#endif
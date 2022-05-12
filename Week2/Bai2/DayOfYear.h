#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

class DayOfYear
{
private:
    int day;

public:
    DayOfYear();
    DayOfYear(int year);
    void setDay(int day);
    int getDay() const;
    void display();
    ~DayOfYear();
};
#endif
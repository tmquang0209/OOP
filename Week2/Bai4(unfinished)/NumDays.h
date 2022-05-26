#ifndef NUMDAYS_H
#define NUMDAYS_H
class NumDays
{
private:
    int hours;
    int days;

public:
    NumDays();
    NumDays(int hours);
    NumDays(int hours, int days);
    void setHours(int hours);
    void setDays(int days);
    int getHours() const;
    int getDays() const;
    NumDays operator+(NumDays other);
    NumDays operator-(NumDays other);
    NumDays operator++(int);
    NumDays operator++();
    NumDays operator--(int);
    NumDays operator--();
    void print();
};
#endif
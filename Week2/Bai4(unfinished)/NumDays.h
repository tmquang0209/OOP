#ifndef NUMDAYS_H
#define NUMDAYS_H
class NumDays
{
private:
    int hours;
    double days;

public:
    NumDays();
    NumDays(int hours);
    NumDays(int hours, double days);
    void setHours(int hours);
    void setDays(int hours);
    int getHours() const;
    double getDays() const;
    NumDays operator+(NumDays other);
    NumDays operator-(NumDays other);
    NumDays operator++(int); // Tang so gio
    NumDays operator++();
    NumDays operator--(int); // Giam so gio
    NumDays operator--();
    void print();
};
#endif
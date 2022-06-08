#ifndef DATE_H
#define DATE_H
class Date
{
private:
    int day;
    int month;
    int year;

public:
    void setDay(int days);
    void setMonth(int months);
    void setYear(int years);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void output1() const;
    void output2() const;
    ~Date();
};
#endif
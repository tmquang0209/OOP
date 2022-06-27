#ifndef DATE_H
#define DATE_H
class Date
{
private:
    int day;
    int month;
    int year;

public:
    class ErrorDate
    {
    };
    Date();
    Date(int, int, int);
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    void output1() const;
    void output2() const;
    ~Date();
};
#endif
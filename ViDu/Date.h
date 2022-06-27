#ifndef DATE_H
#define DATE_H

class Date
{
private:
    int ngay, thang, nam;

public:
    Date();
    Date(int ng, int th, int na);
    void setDate(int ng, int th, int na);
    class ErrorDate
    {
    };
};

#endif // DATE_H

#include <iostream>
#include "DayOfYear.h"

using namespace std;

string DayOfYear::months[] = {"January", "February", "March", "April", "May", "June", "July", "August",
                              "September", "October", "November", "December"};

DayOfYear::DayOfYear(int day)
{
    this->day = day;
}

void DayOfYear::display()
{
    if (day > 0 && day <= 31)
        cout << months[0] << " " << day;
    else if (day <= 59)
        cout << months[1] << " " << day - 31;
    else if (day <= 90)
        cout << months[2] << " " << day - 59;
    else if (day <= 120)
        cout << months[3] << " " << day - 90;
    else if (day <= 151)
        cout << months[4] << " " << day - 120;
    else if (day <= 181)
        cout << months[5] << " " << day - 151;
    else if (day <= 212)
        cout << months[6] << " " << day - 181;
    else if (day <= 243)
        cout << months[7] << " " << day - 212;
    else if (day <= 273)
        cout << months[8] << " " << day - 243;
    else if (day <= 304)
        cout << months[9] << " " << day - 273;
    else if (day <= 334)
        cout << months[10] << " " << day - 304;
    else if (day <= 365)
        cout << months[11] << " " << day - 334;
    else
        cout << "Gia tri khong hop le!";
}

DayOfYear::~DayOfYear()
{
}
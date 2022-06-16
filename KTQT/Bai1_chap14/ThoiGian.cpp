#include <iostream>
#include "ThoiGian.h"
using namespace std;
int ThoiGian::count = 0;
ThoiGian::ThoiGian()
{
    gio = 0;
    phut = 0;
    giay = 0;
    count++;
}

ThoiGian::ThoiGian(int gio, int phut, int giay)
{
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;
    count++;
}

void ThoiGian::print()
{
    cout << gio << ":" << phut << ":" << giay << endl;
}

ThoiGian ThoiGian::operator+(const ThoiGian obj)
{
    ThoiGian temp;
    temp.gio = gio + obj.gio;
    temp.phut = phut + obj.phut;
    temp.giay = giay + obj.giay;

    if (temp.giay > 59)
    {
        temp.giay -= 60;
        temp.phut++;
    }
    if (temp.phut > 59)
    {
        temp.phut -= 60;
        temp.gio++;
    }

    return temp;
}

void ThoiGian::printCount()
{
    cout << "Count: " << count << endl;
}
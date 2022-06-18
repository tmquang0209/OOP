#include <iostream>
#include "StopWatch.h"
#include "StopWatch.cpp"

using namespace std;

int inputValue(int);

int main()
{
    int h, m, s;
    cout << "YC1: " << endl;
    cout << "Nhap so gio: ";
    h = inputValue(h);
    cout << "Nhap so phut: ";
    m = inputValue(m);
    cout << "Nhap so giay: ";
    s = inputValue(s);
    StopWatch sw(h, m, s);
    sw.print();
    cout << "So giay: " << sw.getSecond() << endl;

    cout << "YC2:" << endl;
    StopWatch sw2;
    cout << "Nhap so giay: ";
    s = inputValue(s);
    sw2.setSecond(s);
    sw2.print();
    return 0;
}

int inputValue(int num)
{
    while (!(cin >> num) || num < 0 || num > 10000000)
    {
        cout << "Nhap lai: ";
        cin.clear();
    }
    return num;
}
#include <iostream>
#include "StopWatch.h"
#include "StopWatch.cpp"

using namespace std;

int inputValue(int);

int main()
{
    int h, m, s;

    cout << "YC1: " << endl;
    cout << "Nhap gio: ";
    h = inputValue(h);
    cout << "Nhap phut: ";
    m = inputValue(m);
    cout << "Nhap giay: ";
    s = inputValue(s);

    StopWatch sw(h, m, s);
    sw.print();
    cout << sw.getHour() << endl;

    cout << "YC2:" << endl;

    for (int i = 0; i < 20; i++)
    {
        sw.run(5);
        sw.print();
        cout << sw.getHour() << endl;
        cout << endl;
    }
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
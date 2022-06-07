#include <iostream>
#include "connguoi.h"

using namespace std;

connguoi::connguoi()
{
    hoten = "";
    tuoi = 0;
}

connguoi::connguoi(string ht, int t)
{
    hoten = ht;
    tuoi = t;
}

void connguoi::setHoten(string ht)
{
    hoten = ht;
}

void connguoi::setTuoi(int t)
{
    tuoi = t;
}

string connguoi::getHoten() const
{
    return hoten;
}

int connguoi::getTuoi() const
{
    return tuoi;
}

void connguoi::in()
{
    cout << "Ho ten: " << hoten << endl;
    cout << "Tuoi: " << tuoi << endl;
}
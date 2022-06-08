#include <iostream>
#include "connguoi.h"
#include "Date.h"
#include "Date.cpp"

using namespace std;

connguoi::connguoi()
{
    hoten = "";
    ngaySinh.setDate("");
    queQuan = "";
}

connguoi::connguoi(string ht, string ns, string qq)
{
    hoten = ht;
    ngaySinh.setDate(ns);
    queQuan = qq;
}

void connguoi::setHoten(string ht)
{
    hoten = ht;
}

void connguoi::setNgaySinh(string ns)
{
    ngaySinh.setDate(ns);
}

void connguoi::setQueQuan(string qq)
{
    queQuan = qq;
}

string connguoi::getHoten() const
{
    return hoten;
}

string connguoi::getNgaySinh() const
{
    return ngaySinh.getDate();
}

string connguoi::getQueQuan() const
{
    return queQuan;
}

void connguoi::in()
{
    cout << "Ho ten: " << hoten << endl;
    cout << "Ngay sinh: " << ngaySinh.getDate() << endl;
    cout << "Que quan: " << queQuan << endl;
}
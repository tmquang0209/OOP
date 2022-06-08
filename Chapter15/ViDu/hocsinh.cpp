#include <iostream>
#include "hocsinh.h"
using namespace std;

hocsinh::hocsinh() : connguoi()
{
    truong = "";
    lop = "";
    soDienThoai = "";
}

hocsinh::hocsinh(string ht, string ns, string qq,
                 string truong, string lop, string sdt)
    : connguoi(ht, ns, qq)
{
    this->truong = truong;
    this->lop = lop;
    this->soDienThoai = sdt;
}

void hocsinh::setTruong(string t)
{
    truong = t;
}

void hocsinh::setLop(string l)
{
    lop = l;
}

void hocsinh::setSoDienThoai(string soDienThoai)
{
    this->soDienThoai = soDienThoai;
}

string hocsinh::getTruong() const
{
    return truong;
}

string hocsinh::getLop() const
{
    return lop;
}

string hocsinh::getSoDienThoai() const
{
    return soDienThoai;
}

void hocsinh::in()
{
    connguoi::in();
    cout << "Truong: " << truong << endl;
    cout << "Lop: " << lop << endl;
    cout << "So dien thoai: " << soDienThoai << endl;
}

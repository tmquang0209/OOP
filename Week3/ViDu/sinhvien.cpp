#include <iostream>
#include "sinhvien.h"
using namespace std;

sinhvien::sinhvien() : hocsinh()
{
    chuyenNganh = "";
    msv = "";
}

sinhvien::sinhvien(string ht, int t, string truong, string lop, string sdt, string cn, string msv) : hocsinh(ht, t, truong, lop, sdt)
{
    this->chuyenNganh = cn;
    this->msv = msv;
}

void sinhvien::setChuyenNganh(string cn)
{
    chuyenNganh = cn;
}

void sinhvien::setMsv(string msv)
{
    this->msv = msv;
}

string sinhvien::getChuyenNganh() const
{
    return chuyenNganh;
}

string sinhvien::getMsv() const
{
    return msv;
}

void sinhvien::in()
{
    hocsinh::in();
    cout << "Chuyen nganh: " << chuyenNganh << endl;
    cout << "Ma so: " << msv << endl;
}
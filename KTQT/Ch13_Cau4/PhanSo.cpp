#include <iostream>
#include "PhanSo.h"
using namespace std;

PhanSo::PhanSo()
{
    tuSo = 1;
    mauSo = 1;
}

PhanSo::PhanSo(int tuSo, int mauSo)
{
    this->tuSo = tuSo;
    this->mauSo = mauSo;
}

PhanSo PhanSo::operator+(PhanSo &obj)
{
    PhanSo result;
    result.tuSo = tuSo * obj.mauSo + obj.tuSo * mauSo;
    result.mauSo = mauSo * obj.mauSo;
    return result;
}

PhanSo PhanSo::operator-(PhanSo &obj)
{
    PhanSo result;
    result.tuSo = tuSo * obj.mauSo - obj.tuSo * mauSo;
    result.mauSo = mauSo * obj.mauSo;
    return result;
}

void PhanSo::print()
{
    cout << tuSo << "/" << mauSo << endl;
}

PhanSo PhanSo::Min(PhanSo &a, PhanSo &b)
{
    if (a.tuSo > b.tuSo && a.mauSo > b.mauSo)
        return b;
    return a;
}
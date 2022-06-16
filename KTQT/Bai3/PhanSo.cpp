#include <iostream>
#include "PhanSo.h"
using namespace std;

PhanSo::PhanSo()
{
    tuSo = 0;
    mauSo = 0;
}

PhanSo::PhanSo(int tuSo, int mauSo)
{
    this->tuSo = tuSo;
    this->mauSo = mauSo;
}

bool PhanSo::operator!=(const PhanSo obj)
{
    if ((double)obj.tuSo / obj.mauSo != (double)tuSo / mauSo)
        return true;
    else
        return false;
}

ostream &operator<<(ostream &os, PhanSo &obj)
{
    os << obj.tuSo << "/" << obj.mauSo;
    return os;
}

void PhanSo::Max(PhanSo obj1, PhanSo obj2)
{
    PhanSo max;
    if (obj1.tuSo > obj2.tuSo && obj1.mauSo > obj2.mauSo)
        max = obj1;
    else
        max = obj2;

    cout << "Phan so lon nhat la: " << max << endl;
}
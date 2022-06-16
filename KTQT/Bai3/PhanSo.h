#ifndef PHANSO_H
#define PHANSO_H
#include <iostream>
using namespace std;
class PhanSo
{
private:
    int tuSo;
    int mauSo;

public:
    PhanSo();
    PhanSo(int, int);
    bool operator!=(const PhanSo);
    static void Max(PhanSo, PhanSo);
    friend ostream &operator<<(ostream &, PhanSo &);
};
#endif
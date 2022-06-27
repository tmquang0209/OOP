#include <iostream>
#include "Diem.h"
#include "Diem.cpp"

using namespace std;

int main()
{
    Diem<int> d1;
    Diem<float> d2;

    d1.setDiem(10);
    d2.setDiem(9.9);

    cout << "Diem 1: " << d1.getDiem() << endl;
    cout << "Diem 2: " << d2.getDiem() << endl;
    return 0;
}
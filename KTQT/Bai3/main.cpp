#include <iostream>
#include "PhanSo.h"
#include "PhanSo.cpp"
using namespace std;

int main()
{
    PhanSo a(1, 2), b(1, 1);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    PhanSo::Max(a, b);

    if (a != b)
        cout << "Khac nhau";
    else
        cout << "Giong nhau";
    return 0;
}

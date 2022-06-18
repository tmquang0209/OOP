#include <iostream>
#include "PhanSo.h"
#include "PhanSo.cpp"

using namespace std;

int main()
{
    PhanSo a(1, 2), b(3, 4), c;
    cout << "a = ";
    a.print();
    cout << "b = ";
    b.print();

    c = a + b;
    cout << "a + b = ";
    c.print();

    c = a - b;
    cout << "a - b = ";
    c.print();

    cout << "Min(a, b) = ";
    PhanSo::Min(a, b).print();

    return 0;
}
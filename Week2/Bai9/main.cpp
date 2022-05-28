#include <iostream>
#include "FeetInches.h"
#include "FeetInches.cpp"

using namespace std;

int main()
{
    FeetInches a(3, 14), a1(4, 15);
    cout << a;
    cout << a1;
    cout << "a + a1 = " << a + a1 << endl;
    cout << "a - a1 = " << a - a1 << endl;
    cout << "++a = " << ++a << endl;
    cout << "a++ = " << a++ << endl;
    cout << "a > a1 = " << (a > a1) << endl;
    cout << "a < a1 = " << (a < a1) << endl;
    cout << "a == a1 = " << (a == a1) << endl;
    cout << "a != a1 = " << (a != a1) << endl;
    cout << "a >= a1 = " << (a >= a1) << endl;
    cout << "a <= a1 = " << (a <= a1) << endl;

    return 0;
}
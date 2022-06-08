#include <iostream>
#include "FeetInches.h"
#include "FeetInches.cpp"

using namespace std;

int main()
{
    FeetInches test(10, 4), test2(30, 5);
    cout << test << endl;

    FeetInches test3 = test2;

    cout << test3 << endl;

    if (test <= test2)
    {
        cout << "test <= test2" << endl;
    }
    else
    {
        cout << "test > test2" << endl;
    }
}
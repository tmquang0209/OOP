#include <iostream>
#include "Date.h"
#include "Date.cpp"

using namespace std;

int main()
{
    try
    {
        Date d1(10, 13, 2022);
        d1.output1();
    }
    catch (Date::ErrorDate)
    {
        cout << "ErrorDate" << endl;
    }
}
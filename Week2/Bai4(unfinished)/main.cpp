#include <iostream>
#include "NumDays.h"
#include "NumDays.cpp"

using namespace std;

int main()
{
    NumDays person1(8), person2(10);
    cout << person1.getDays();
}
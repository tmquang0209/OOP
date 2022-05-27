#include <iostream>
#include "Month.h"
#include "Month.cpp"

using namespace std;

int main()
{
    Month m1(12), m2("January");
    m1++;
    cout << m1.getName() << endl;
    cout << m1.getMonthNumber() << endl;
}
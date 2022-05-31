#include <iostream>
#include "Month.h"
#include "Month.cpp"

using namespace std;

int main()
{
    Month m1(12), m2("January"), m3;
    m3 = m1++;
    cout << m3.getName() << endl;
    cout << m3.getMonthNumber() << endl;
}
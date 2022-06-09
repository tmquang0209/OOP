#include <iostream>
#include "Time.h"
#include "MilTime.h"
#include "MilTime.cpp"

using namespace std;

int main()
{
    Time t1(10, 12, 13);
    MilTime m1(14, 15, 16), m2;
    cout << m1;
    cin >> m2;
    cout << m2;
    return 0;
}
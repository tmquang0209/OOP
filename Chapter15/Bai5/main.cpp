#include <iostream>
#include "Time.h"
#include "MilTime.h"
#include "MilTime.cpp"
#include "TimeClock.h"
#include "TimeClock.cpp"

using namespace std;

int main()
{
    // Time t1(10, 12, 13);
    // MilTime m1(14, 15, 16), m2;
    TimeClock c1(9, 20, 10), c2(12, 30, 20), c3;
    // cout << c1;
    // cout << c2;
    c3.elapsedTime(c1, c2);
    return 0;
}
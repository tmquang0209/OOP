#include <iostream>
#include "TimeOff.h"
#include "TimeOff.cpp"
#include "NumDays.h"
#include "NumDays.cpp"

using namespace std;

int main()
{
    TimeOff t1(1, "Precious Ramotswe", 200, 30, 255, 86, 40, 10);
    TimeOff t2;
    // cin >> t2;
    cout << t1;
    return 0;
}
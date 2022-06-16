#include <iostream>
#include "ThoiGian.h"
#include "ThoiGian.cpp"

using namespace std;

int main()
{
    // 12:40:6 + 15:30:10 = 28:10:16
    ThoiGian time1(12, 40, 6), time2(15, 30, 10), time3;
    time3 = time1 + time2;
    time3.print();
    // time3.printCount();
    ThoiGian::printCount();
    return 0;
}
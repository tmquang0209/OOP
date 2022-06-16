#include <iostream>
#include "ThoiGian.h"
#include "ThoiGian.cpp"

using namespace std;

int main()
{
    ThoiGian time1(10, 50, 51), time2(11, 12, 13), time3;
    time3 = time1 + time2;
    time3.print();
    time3.printCount();
    return 0;
}
#include <iostream>
#include "Date.h"
#include "Date.cpp"

using namespace std;

int main()
{
    Date date1(18, 6, 2021), date2(1, 12, 2020), date3;
    // ++date1;
    date3 = --date1;
    cout << date3;
    // date3 = date1 - date2;
    // cout << date3.getDay() << endl;
    return 0;
}

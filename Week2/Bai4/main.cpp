#include <iostream>
#include "NumDays.h"
#include "NumDays.cpp"

using namespace std;

int main()
{
    NumDays person1(8), person2(10), result;
    // person1++;
    // cout << person1.getDays() << endl;
    // person1--;
    // cout << person1.getDays() << endl;
    // result = person1 + person2;
    result = person1 - person2;
    cout << result.getDays() << endl;
}
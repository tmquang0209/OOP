#include <iostream>
#include <string.h>
#include "DayOfYear.h"
#include "DayOfYear.cpp"

using namespace std;

int main()
{
    DayOfYear day(1, "February");
    day.display();
}
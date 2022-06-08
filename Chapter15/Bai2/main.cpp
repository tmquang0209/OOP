#include <iostream>
#include <string>
#include "Employee.h"
#include "Employee.cpp"
#include "ShiftSupervisor.h"
#include "ShiftSupervisor.cpp"

using namespace std;

int main()
{
    ShiftSupervisor s1("Nguyen Van A", 1, "01/01/2020", 100000, 12);
    s1.print();
    return 0;
}
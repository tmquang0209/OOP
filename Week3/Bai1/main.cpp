#include <iostream>
#include <string>
#include "Employee.h"
#include "Employee.cpp"
#include "ProductionWorker.h"
#include "ProductionWorker.cpp"

int main()
{
    Employee e1("Nguyen Van A", 1, "01/01/2020");
    e1.print();
    cout << endl;

    ProductionWorker p1("Nguyen Van B", 2, "02/02/2020", 1, 5, 26);
    p1.print();

    return 0;
}

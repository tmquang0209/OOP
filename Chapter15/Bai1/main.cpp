#include <iostream>
#include <string>
#include "Employee.h"
#include "Employee.cpp"
#include "ProductionWorker.h"
#include "ProductionWorker.cpp"
#include "Date.h"
#include "Date.cpp"

int main()
{
    Date date;
    cin >> date;
    cout << endl;

    Employee e1("Nguyen Van A", 1, date);
    e1.print();
    cout << endl;

    ProductionWorker p1("Nguyen Van B", 2, date, 1, 5, 26);
    p1.print();

    return 0;
}

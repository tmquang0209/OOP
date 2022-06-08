#include <iostream>
#include <string>
#include "Employee.h"
#include "Employee.cpp"
#include "ProductionWorker.h"
#include "ProductionWorker.cpp"
#include "TeamLeader.h"
#include "TeamLeader.cpp"

int main()
{
    Employee e1("Nguyen Van A", 1, "01/01/2020");
    e1.print();
    cout << endl;

    ProductionWorker p1("Nguyen Van B", 2, "02/02/2020", 1, 5, 26);
    p1.print();
    cout << endl;

    TeamLeader t1("Nguyen Van C", 3, "03/03/2020", 1, 5, 26, 10, 15, 5);
    t1.print();
    return 0;
}

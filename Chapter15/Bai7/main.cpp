#include <iostream>
#include <string>
#include "PersonData.h"
#include "PersonData.cpp"
#include "CustomerData.h"
#include "CustomerData.cpp"
using namespace std;

int main()
{
    CustomerData obj1("Tran", "Quang", "Vinh Tuong", "Vinh Yen",
                      "Vinh Phuc", 28000, "0397847805", "A41603",
                      true);
    CustomerData obj2("Nguyen", "A", "Yen Lac", "Vinh Yen",
                      "Vinh Phuc", 28000, "0397847805", "A41604",
                      false);
    obj1.displayCustomer();
    cout << endl;
    obj2.displayCustomer();
    cout << endl;
    return 0;
}

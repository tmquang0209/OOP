#include <iostream>
#include <string>
#include "PersonData.h"
#include "PersonData.cpp"
#include "CustomerData.h"
#include "CustomerData.cpp"
#include "PreferredCustomer.h"
#include "PreferredCustomer.cpp"
using namespace std;

int main()
{
    PreferredCustomer obj[5] = {
        PreferredCustomer("Tran", "Quang", "Vinh Tuong", "Vinh Yen",
                          "Vinh Phuc", 28000, "0397847805", "A41603",
                          true, 1000),
        PreferredCustomer("Nguyen", "A", "Yen Lac", "Vinh Yen",
                          "Vinh Phuc", 28000, "0397847805", "A41604",
                          false, 500),
        PreferredCustomer("Nguyen", "B", "Yen Lac", "Vinh Yen",
                          "Vinh Phuc", 28000, "0397847805", "A41605",
                          false, 2000),
        PreferredCustomer("Nguyen", "C", "Yen Lac", "Vinh Yen",
                          "Vinh Phuc", 28000, "0397847805", "A41606",
                          false, 3000),
        PreferredCustomer("Nguyen", "D", "Yen Lac", "Vinh Yen",
                          "Vinh Phuc", 28000, "0397847805", "A41607",
                          false, 400)};
    for (int i = 0; i < 5; i++)
    {
        cout << "====== Profile " << i + 1 << " ======" << endl;
        obj[i].displayPerferredCustomer();
        cout << endl;
    }
    return 0;
}

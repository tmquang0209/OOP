#include <iostream>
#include "LandTract.h"
#include "LandTract.cpp"

using namespace std;

int main()
{
    LandTract tract1(1, 2);
    LandTract tract2(3, 4);
    cout << "Area of tract1: " << tract1.getArea() << endl;
    cout << "Area of tract2: " << tract2.getArea() << endl;
    return 0;
}

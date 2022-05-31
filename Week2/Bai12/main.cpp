#include <iostream>
#include "LandTract.h"
#include "LandTract.cpp"

using namespace std;

int main()
{
    LandTract tract1(10, 20);
    LandTract tract2(10, 20);
    cout << "Area of tract1: " << tract1.getArea() << endl;
    cout << "Area of tract2: " << tract2.getArea() << endl;
    return 0;
}

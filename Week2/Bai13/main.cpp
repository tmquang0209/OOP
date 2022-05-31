#include <iostream>
#include "CarpetCalc.h"
#include "CarpetCalc.cpp"
#include "FeetInches.h"
#include "FeetInches.cpp"

using namespace std;

int main()
{
    CarpetCalc carpet1(10, 12);
    cout << carpet1.calcPrice() << endl;
}

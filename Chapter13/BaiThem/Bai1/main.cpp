#include <iostream>
#include "Fraction.h"
#include "Fraction.cpp"

using namespace std;

int main()
{
    Fraction frac, frac2(2, 5);
    frac.input();

    frac.reduceFractions();
    cout << "Rut gon:";
    frac.output();
    cout << endl;

    cout << "Tang them 1: ";
    frac.increaseFractionBy1();
    frac.reduceFractions();
    frac.output();
    cout << endl;

    cout << "Giam 1: ";
    frac.reduceFractionsBy1();
    frac.reduceFractions();
    frac.output();
    cout << endl;

    cout << "Cong 2 phan so: ";
    frac.plusFraction(frac2);
    frac.reduceFractions();
    frac.output();
    cout << endl;

    cout << "Tru 2 phan so: ";
    frac.minusFraction(frac2);
    frac.reduceFractions();
    frac.output();
    cout << endl;

    cout << "Nhan 2 phan so: ";
    frac.multiplyFraction(frac2);
    frac.reduceFractions();
    frac.output();
    cout << endl;

    cout << "Chia 2 phan so: ";
    frac.divisionFraction(frac2);
    frac.reduceFractions();
    frac.output();
    cout << endl;

    return 0;
}
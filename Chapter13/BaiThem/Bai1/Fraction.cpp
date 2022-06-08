#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int denominator)
{
    this->numerator = 1;
    this->denominator = denominator;
}

Fraction::Fraction(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;
}

void Fraction::input()
{
    cout << "Nhap tu so: ";
    cin >> numerator;
    cout << "Nhap mau so: ";
    cin >> denominator;
}

void Fraction::increaseFractionBy1()
{
    numerator += denominator;
}

void Fraction::reduceFractionsBy1()
{
    numerator -= denominator;
}

int Fraction::gcd()
{
    int num1 = numerator;
    int num2 = denominator;
    int r;
    while (num2 != 0)
    {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    return num1;
}

void Fraction::reduceFractions()
{
    int calcGcd = gcd();
    numerator /= calcGcd;
    denominator /= calcGcd;
}

void Fraction::plusFraction(Fraction fraction2)
{
    int num1 = numerator * fraction2.denominator;
    int num2 = denominator * fraction2.numerator;
    numerator = num1 + num2;
    denominator = denominator * fraction2.denominator;
}

void Fraction::minusFraction(Fraction fraction2)
{
    int num1 = numerator * fraction2.denominator;
    int num2 = denominator * fraction2.numerator;
    numerator = num1 - num2;
    denominator = denominator * fraction2.denominator;
}

void Fraction::multiplyFraction(Fraction fraction2)
{
    numerator = numerator * fraction2.numerator;
    denominator = denominator * fraction2.denominator;
}

void Fraction::divisionFraction(Fraction fraction2)
{
    numerator = numerator * fraction2.denominator;
    denominator = denominator * fraction2.numerator;
}

void Fraction::output()
{
    denominator /= gcd();
    cout << numerator << "/" << denominator << endl;
}

Fraction::~Fraction()
{
}
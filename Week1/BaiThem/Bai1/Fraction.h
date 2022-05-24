#ifndef FRACTION_h
#define FRACTION_h
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int denominator);
    Fraction(int numerator, int denominator);
    void input();
    void increaseFractionBy1();
    void reduceFractionsBy1();
    void reduceFractions();
    void plusFraction(Fraction fraction2);     // +
    void minusFraction(Fraction fraction2);    // -
    void multiplyFraction(Fraction fraction2); // *
    void divisionFraction(Fraction fraction2); // /
    void output();
    int gcd();
    ~Fraction();
};
#endif
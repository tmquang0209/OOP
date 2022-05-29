#include "FeetInches.h"
#ifndef LANDTRACT_H
#define LANDTRACT_H
class LandTract
{
private:
    FeetInches length;
    FeetInches width;

public:
    LandTract();
    LandTract(double, double);
    void setLength(double);
    void setWidth(double);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
    bool operator==(LandTract &);
    friend istream &operator>>(istream &, LandTract &);
    friend ostream &operator<<(ostream &, const LandTract &);
};
#endif
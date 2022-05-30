#include "FeetInches.h"
#ifndef LANDTRACT_H
#define LANDTRACT_H
class LandTract
{
private:
    FeetInches length;
    FeetInches width;
    friend class FeetInches;

public:
    LandTract();
    LandTract(int, int);
    void setLength(int);
    void setWidth(int);
    int getLength();
    int getWidth();
    int getArea() const;
    bool operator==(LandTract &);
    friend istream &operator>>(istream &, LandTract &);
    friend ostream &operator<<(ostream &, const LandTract &);
};
#endif
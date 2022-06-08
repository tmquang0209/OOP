#include <iostream>
#include "FeetInches.h"
#ifndef LANDTRACT_H
#define LANDTRACT_H
class LandTract
{
private:
    FeetInches length;
    FeetInches width;
    friend void simplify();

public:
    LandTract();
    LandTract(int, int);
    int getLength() const;
    int getWidth() const;
    int getArea();
};
#endif
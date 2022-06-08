/*
Make a LandTract class that is composed of two FeetInches objects, one for the
tract’s length and one for the width. The class should have a member function that
returns the tract’s area. Demonstrate the class in a program that asks the user to enter
the dimensions for two tracts of land. The program should display the area of each
tract of land and indicate whether the tracts are of equal size.
*/
#include <iostream>
#include "LandTract.h"
#include "FeetInches.h"
#include "FeetInches.cpp"

using namespace std;

LandTract::LandTract()
{
}

LandTract::LandTract(int length, int width)
{
    this->length.setInches(length);
    this->width.setInches(width);
}

int LandTract::getLength() const
{
    return length.getInches();
}

int LandTract::getWidth() const
{
    return width.getInches();
}

int LandTract::getArea()
{
    return length.getInches() * width.getInches();
}
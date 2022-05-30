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

void LandTract::setLength(int length)
{
    this->length.setInches(length);
}

void LandTract::setWidth(int width)
{
    this->width.setInches(width);
}

int LandTract::getLength()
{
    return this->length.getInches();
}

int LandTract::getWidth()
{
    return this->width.getInches();
}

int LandTract::getArea() const
{
    return this->length.getInches() * this->width.getInches();
}

istream &operator>>(istream &is, LandTract &obj)
{
    cout << "Length: ";
    is >> obj.length;
    cout << "Width: ";
    is >> obj.width;
    return is;
}

ostream &operator<<(ostream &os, const LandTract &obj)
{
    os << "Length: " << obj.length << endl
       << "Width: " << obj.width << endl
       << "Area: " << obj.getArea() << endl;
    return os;
}
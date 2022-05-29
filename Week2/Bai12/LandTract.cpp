#include <iostream>
#include "LandTract.h"
#include "FeetInches.h"
#include "FeetInches.cpp"

using namespace std;

LandTract::LandTract()
{
    length = FeetInches();
    width = FeetInches();
}

LandTract::LandTract(double l, double w)
{
    length.setFeet(l);
    width.setFeet(w);
}

void LandTract::setLength(double l)
{
    length.setFeet(l);
}

void LandTract::setWidth(double w)
{
    width.setFeet(w);
}

double LandTract::getLength() const
{
    return length.getFeet();
}

double LandTract::getWidth() const
{
    return width.getFeet();
}

double LandTract::getArea() const
{
    return length.getFeet() * width.getFeet();
}

bool LandTract::operator==(LandTract &right)
{
    return (length == right.length && width == right.width);
}

istream &operator>>(istream &is, LandTract &obj)
{
    is >> obj.length >> obj.width;
    return is;
}

ostream &operator<<(ostream &os, const LandTract &obj)
{
    os << "Length: " << obj.length << endl
       << "Width: " << obj.width << endl
       << "Area: " << obj.getArea() << endl;
    return os;
}
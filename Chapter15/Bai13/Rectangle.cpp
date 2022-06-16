#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle() : BasicShape()
{
    height = 0;
    width = 0;
}

Rectangle::Rectangle(double height, double width)
{
    this->height = height;
    this->width = width;
    calcArea();
}

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::calcArea()
{
    area = height * width;
}

void Rectangle::print()
{
    cout << "Height: " << getHeight() << endl
         << "Width: " << getWidth() << endl
         << "Area: " << area << endl;
}
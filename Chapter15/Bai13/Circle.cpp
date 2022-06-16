#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() : BasicShape()
{
    centerX = 0;
    centerY = 0;
    radius = 0;
}

Circle::Circle(double x, double y, double radius)
{
    this->centerX = x;
    this->centerY = y;
    this->radius = radius;
    calcArea();
}

double Circle::getCenterX() const
{
    return centerX;
}

double Circle::getCenterY() const
{
    return centerY;
}

double Circle::getRadius() const
{
    return radius;
}

void Circle::calcArea()
{
    area = radius * radius * 3.14;
}

void Circle::print()
{
    cout << "Center X: " << centerX << endl
         << "Center Y: " << centerY << endl
         << "Radius: " << radius << endl
         << "Area: " << area << endl;
}
#include <iostream>
#include "Circle.h"

using namespace std;

const double PI = 3.14159;

Circle::Circle()
{
    radius = 0.0;
}

Circle::Circle(double radius)
{
    this->radius = radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
    return PI * radius * radius;
}

double Circle::getCircumference() const
{
    return 2 * PI * radius;
}

int main()
{
    Circle circle;
    circle.setRadius(5);
    cout << circle.getArea() << endl;
    cout << circle.getCircumference() << endl;
    return 0;
}
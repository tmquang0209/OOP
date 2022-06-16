#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"
class Circle : public BasicShape
{
private:
    /*
    + centerX : double
    + centerY : double
    + radius : double
    */
    double centerX;
    double centerY;
    double radius;

public:
    Circle();
    Circle(double, double, double);
    double getCenterX() const;
    double getCenterY() const;
    double getRadius() const;
    void calcArea();
    void print();
};
#endif
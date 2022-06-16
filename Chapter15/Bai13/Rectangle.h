#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"
class Rectangle : public BasicShape
{
private:
    double height;
    double width;

public:
    Rectangle();
    Rectangle(double, double);
    double getHeight() const;
    double getWidth() const;
    void calcArea();
    void print();
};
#endif
#include <iostream>
#include "BasicShape.h"

using namespace std;

BasicShape::BasicShape()
{
    area = 0;
}

BasicShape::BasicShape(double area)
{
    this->area = (area < 0) ? 0 : area;
}

// void BasicShape::setArea(double area)
// {
//     this->area = (area < 0) ? 0 : area;
// }

double BasicShape::getArea() const
{
    return area;
}
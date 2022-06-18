#include <iostream>
#include "LatDoc.h"

using namespace std;

LatDoc::LatDoc()
{
    axis = 0;
}

LatDoc::LatDoc(double axis)
{
    this->axis = axis;
}

void LatDoc::bienDoi(Point &p)
{
    p.y = 2 * axis - p.y;
}

void LatDoc::bienDoiMang(Point *p, int size)
{
    cout << "Lat doc:" << endl;
    PhepBienDoi::bienDoiMang(p, size);
}

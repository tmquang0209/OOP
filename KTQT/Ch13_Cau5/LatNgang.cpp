#include <iostream>
#include "LatNgang.h"

using namespace std;

LatNgang::LatNgang() : PhepBienDoi()
{
    axis = 0;
}

LatNgang::LatNgang(double axis)
{
    this->axis = axis;
}

void LatNgang::bienDoi(Point &p)
{
    p.x = 2 * axis - p.x;
}

void LatNgang::bienDoiMang(Point *p, int size)
{
    cout << "Lat ngang:" << endl;
    PhepBienDoi::bienDoiMang(p, size);
}
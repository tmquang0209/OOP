#include <iostream>
#include "PhepBienDoi.h"
#include "Point.h"

using namespace std;

PhepBienDoi::PhepBienDoi()
{
}

void PhepBienDoi::bienDoiMang(Point *p, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << "(" << p[i].x << "," << p[i].y << ") = ";
        bienDoi(p[i]);
        cout << "(" << p[i].x << "," << p[i].y << ")" << endl;
    }
}
#include <iostream>
#include "PhepDich.h"

using namespace std;

PhepDich::PhepDich()
{
    shift_x = 0;
    shift_y = 0;
}

PhepDich::PhepDich(double shift_x, double shift_y)
{
    this->shift_x = shift_x;
    this->shift_y = shift_y;
}

void PhepDich::bienDoi(Point &p)
{
    p.x += shift_x;
    p.y += shift_y;
}

void PhepDich::bienDoiMang(Point *p, int size)
{
    cout << "Phep dich:" << endl;
    PhepBienDoi::bienDoiMang(p, size);
}
#ifndef PHEPDICH_H
#define PHEPDICH_H
#include "PhepBienDoi.h"
class PhepDich : public PhepBienDoi
{
private:
    double shift_x, shift_y;

public:
    PhepDich();
    PhepDich(double, double);
    void bienDoi(Point &);
    void bienDoiMang(Point *, int);
};
#endif
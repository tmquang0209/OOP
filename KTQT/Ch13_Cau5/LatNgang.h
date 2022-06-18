#ifndef LATNGANG_H
#define LATNGANG_H
#include "PhepBienDoi.h"
class LatNgang : public PhepBienDoi
{
private:
    double axis;

public:
    LatNgang();
    LatNgang(double);
    void bienDoi(Point &);
    void bienDoiMang(Point *, int);
};
#endif
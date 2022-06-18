#ifndef LATDOC_H
#define LATDOC_H
#include "PhepBienDoi.h"
class LatDoc : public PhepBienDoi
{
private:
    double axis;

public:
    LatDoc();
    LatDoc(double);
    void bienDoi(Point &);
    void bienDoiMang(Point *, int);
};
#endif
#include <iostream>
#include "Point.h"
#include "Point.cpp"
#include "PhepBienDoi.h"
#include "PhepBienDoi.cpp"
#include "LatDoc.h"
#include "LatDoc.cpp"
#include "LatNgang.h"
#include "LatNgang.cpp"
#include "PhepDich.h"
#include "PhepDich.cpp"

using namespace std;

int main()
{
    Point p[3] = {Point(1, 2), Point(3, 4), Point(5, 6)};
    PhepBienDoi *pb[10] = {
        new LatDoc(3),
        new LatNgang(3),
        new PhepDich(3, 4),
        new LatDoc(10),
        new LatNgang(10),
        new PhepDich(10, 20),
        new LatDoc(-3),
        new LatNgang(-3),
        new PhepDich(-3, -4),
        new LatDoc(-10)};

    // pb[0]->bienDoiMang(p, 3);
    // pb[0]->print();

    for (int i = 0; i < 10; i++)
    {
        pb[i]->bienDoiMang(p, 3);
        cout << endl;
    }
}
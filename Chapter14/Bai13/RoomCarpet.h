#include "FeetInches.h"
#ifndef ROOMCARPET_H
#define ROOMCARPET_H
class RoomCarpet
{
private:
    FeetInches width;
    FeetInches length;

public:
    RoomCarpet();
    RoomCarpet(int length, int width);
    void setLength(int length);
    void setWidth(int width);
    int calcPrice();
    int getLength() const;
    int getWidth() const;
    int getArea();
};
#endif
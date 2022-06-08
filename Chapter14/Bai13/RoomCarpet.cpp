#include <iostream>
#include "RoomCarpet.h"

using namespace std;

RoomCarpet::RoomCarpet()
{
    length.setFeet(0);
    width.setFeet(0);
}

RoomCarpet::RoomCarpet(int length, int width)
{
    this->length.setFeet(length);
    this->width.setFeet(width);
}

void RoomCarpet::setLength(int length)
{
    this->length.setFeet(length);
}

void RoomCarpet::setWidth(int width)
{
    this->width.setFeet(width);
}

int RoomCarpet::calcPrice()
{
    int area = getArea();
    return area * 8;
}

int RoomCarpet::getLength() const
{
    return length.getFeet();
}

int RoomCarpet::getWidth() const
{
    return width.getFeet();
}

int RoomCarpet::getArea()
{
    return length.getFeet() * width.getFeet();
}
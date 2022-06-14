#ifndef FISH_H
#define FISH_H
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;
class Fish : public Pet
{
private:
    string typeOfFish;

public:
    Fish();
    Fish(string name, string habitat, string typeOfFish);
    void setInfor(string name, string habitat, string typeOfFish);
    void input();
    void display();
};
#endif
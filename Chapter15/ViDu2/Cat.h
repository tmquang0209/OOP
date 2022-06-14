#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;
class Cat : public Pet
{
private:
    string featherLength;

public:
    Cat();
    Cat(string name, string habitat, string featherLength);
    void setInfor(string name, string habitat, string featherLength);
    void input();
    void display();
};
#endif
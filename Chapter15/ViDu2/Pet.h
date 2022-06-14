#ifndef PET_H
#define PET_H
#include <iostream>
#include <string>
using namespace std;
class Pet
{
private:
    string name;
    string habitat;

public:
    Pet();
    Pet(string name, string habitat);
    void setInfor(string name, string habitat);
    string getName();
    string getHabitat();
    virtual void input();
    virtual void display();
    string type[3] = {"Water", "Land", "Forest"};
};
#endif
#ifndef FORUM_H
#define FORUM_H
#include <iostream>
#include <string>
using namespace std;
class Forum
{
private:
    string name;
    string rank;

public:
    Forum();
    Forum(string name, string rank);
    void setInfor(string name, string rank);
    string getName();
    string getRank();
    virtual void updateRank(string name) = 0;
    virtual void print();
};
#endif
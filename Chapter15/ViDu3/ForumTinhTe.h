#ifndef FORUMTINHTE_H
#define FORUMTINHTE_H
#include <iostream>
#include <string>
#include "Forum.h"
using namespace std;
class ForumTinhTe : public Forum
{
private:
    int yearOfJoin;
    int yearCurrent;

public:
    ForumTinhTe();
    ForumTinhTe(string name, int yearOfJoin, int yearCurrent);
    void setInfor(string name, int yearOfJoin, int yearCurrent);
    int getYearOfJoin();
    int getYearCurrent();
    void updateRank(string name);
    void print();
};
#endif
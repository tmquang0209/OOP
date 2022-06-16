#include <iostream>
#include <string>
#include "ForumTinhTe.h"
using namespace std;

ForumTinhTe::ForumTinhTe()
{
    yearOfJoin = 0;
    yearCurrent = 0;
}

ForumTinhTe::ForumTinhTe(string name, int yearOfJoin, int yearCurrent)
{
    setInfor(name, yearOfJoin, yearCurrent);
}

void ForumTinhTe::setInfor(string name, int yearOfJoin, int yearCurrent)
{
    this->yearOfJoin = yearOfJoin;
    this->yearCurrent = yearCurrent;
    updateRank(name);
}

int ForumTinhTe::getYearOfJoin()
{
    return yearOfJoin;
}

int ForumTinhTe::getYearCurrent()
{
    return yearCurrent;
}

void ForumTinhTe::updateRank(string name)
{
    if (yearCurrent - yearOfJoin > 3)
        Forum::setInfor(name, "Vang");
    else
        Forum::setInfor(name, "Thuong");
}

void ForumTinhTe::print()
{
    Forum::print();
    cout << "Year of join: " << yearOfJoin << endl;
    cout << "Year current: " << yearCurrent << endl;
}
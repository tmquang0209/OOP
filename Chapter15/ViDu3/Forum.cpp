#include <iostream>
#include <string>
#include "Forum.h"
using namespace std;

Forum::Forum()
{
    name = "";
    rank = "";
}

Forum::Forum(string name, string rank)
{
    this->name = name;
    this->rank = rank;
}

void Forum::setInfor(string name, string rank)
{
    this->name = name;
    this->rank = rank;
}

string Forum::getName()
{
    return name;
}

string Forum::getRank()
{
    return rank;
}

void Forum::print()
{
    cout << "Name: " << name << endl;
    cout << "Rank: " << rank << endl;
}
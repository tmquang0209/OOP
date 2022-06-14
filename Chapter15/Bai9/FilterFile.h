#ifndef FILTERFILE_H
#define FILTERFILE_H
#include <iostream>
#include <fstream>
using namespace std;
class FilterFile
{
protected:
    virtual char transform(char ch) = 0;

public:
    void doFilter(ifstream &in, ofstream &out);
};
#endif
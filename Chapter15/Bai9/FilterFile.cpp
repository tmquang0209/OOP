#include <iostream>
#include <fstream>
#include "FilterFile.h"

using namespace std;

void FilterFile::doFilter(ifstream &in, ofstream &out)
{
    char ch;
    while (in.get(ch))
    {
        out.put(transform(ch));
    }
}
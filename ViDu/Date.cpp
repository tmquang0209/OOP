#include "Date.h"

Date::Date()
{
    ngay = 1;
    thang = 1;
    nam = 1;
}
Date::Date(int ng, int th, int na)
{
    if (ng < 1 || ng > 31 || th < 1 || th > 12)
    {
        throw ErrorDate();
    }
    else
    {
        ngay = ng;
        thang = th;
        nam = na;
    }
}
void Date::setDate(int ng, int th, int na)
{
    if (ng < 0 || ng > 31 || th < 0 || th > 12)
    {
        throw ErrorDate();
    }
    else
    {
        ngay = ng;
        thang = th;
        nam = na;
    }
}

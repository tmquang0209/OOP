#include <iostream>
#include "DivSales.h"
using namespace std;

double DivSales::totalSales = 0;

DivSales::DivSales()
{
    sales[0] = 0;
    sales[1] = 0;
    sales[2] = 0;
    sales[3] = 0;
}

void DivSales::setSales(double q1, double q2, double q3, double q4)
{
    sales[0] = q1;
    sales[1] = q2;
    sales[2] = q3;
    sales[3] = q4;
    totalSales += sales[0] + sales[1] + sales[2] + sales[3];
}

double DivSales::quarterSales(int index)
{
    return sales[index - 1];
}

double DivSales::getTotal()
{
    return totalSales;
}
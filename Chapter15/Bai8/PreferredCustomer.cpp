#include <iostream>
#include <string>
#include "PreferredCustomer.h"
using namespace std;

PreferredCustomer::PreferredCustomer() : CustomerData()
{
    accumulatedPoint = 0;
    discount = 0;
}

PreferredCustomer::PreferredCustomer(string first, string last, string address,
                                     string city, string province, int ZIP,
                                     string number, string customerNumber,
                                     bool mailingList, double accumulatedPoint)
    : CustomerData(first, last, address, city, province, ZIP, number, customerNumber, mailingList)
{
    this->accumulatedPoint = accumulatedPoint;
    if (accumulatedPoint >= 2000)
        this->discount = 0.1;
    else if (accumulatedPoint >= 1500)
        this->discount = 0.07;
    else if (accumulatedPoint >= 1000)
        this->discount = 0.06;
    else if (accumulatedPoint >= 500)
        this->discount = 0.05;
    else
        this->discount = 0.0;
}

double PreferredCustomer::getAccumulatedPoint()
{
    return accumulatedPoint;
}

double PreferredCustomer::getDiscount()
{
    return discount;
}

void PreferredCustomer::displayPerferredCustomer()
{
    displayCustomer();
    cout << "Accumulated Point: \t" << accumulatedPoint << endl;
    cout << "Discount: \t\t" << discount * 100 << "%" << endl;
}
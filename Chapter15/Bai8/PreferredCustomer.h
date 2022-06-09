#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H
#include <string>
#include "CustomerData.h"
class PreferredCustomer : public CustomerData
{
private:
    double accumulatedPoint;
    double discount;

public:
    PreferredCustomer();
    PreferredCustomer(string firstName, string lastName,
                      string address, string city,
                      string province, int ZIPCode,
                      string numberPhone, string customerNumber,
                      bool mailingList, double accumulatedPoint);
    double getAccumulatedPoint();
    double getDiscount();
    void displayPerferredCustomer();
};
#endif
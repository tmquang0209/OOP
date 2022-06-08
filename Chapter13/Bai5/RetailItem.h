#include <string>

using namespace std;

#ifndef RETAILITEM_H
#define RETAILITEM_H
class RetailItem
{
private:
    string description;
    int unitsOnHand;
    double price;

public:
    RetailItem(string, int, double);
    void setDescription(string);
    void setUnitsOnHand(int);
    void setPrice(double);
    string getDescription() const;
    int getUnitsOnHand() const;
    double getPrice() const;
    void output() const;
    ~RetailItem();
};
#endif
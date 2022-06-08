#include <iostream>
#include <string>
#include "RetailItem.h"

using namespace std;

RetailItem::RetailItem(string desc, int units, double cash)
{
    description = desc;
    unitsOnHand = units;
    price = cash;
}

void RetailItem::setDescription(string desc)
{
    description = desc;
}

void RetailItem::setUnitsOnHand(int units)
{
    unitsOnHand = units;
}

void RetailItem::setPrice(double cash)
{
    price = cash;
}

string RetailItem::getDescription() const
{
    return description;
}

int RetailItem::getUnitsOnHand() const
{
    return unitsOnHand;
}

double RetailItem::getPrice() const
{
    return price;
}

void RetailItem::output() const
{
    cout << description << "\t" << unitsOnHand << "\t" << price << endl;
}

RetailItem::~RetailItem()
{
    cout << "Destructor" << endl;
}

int main()
{
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
    item1.output();
    item2.output();
    item3.output();

    return 0;
}
#include <iostream>
#include "Inventory.h"

using namespace std;

Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0;
    totalCost = 0;
}

Inventory::Inventory(int itemNumber, int quantity, double cost)
{
    this->itemNumber = itemNumber;
    this->quantity = quantity;
    this->cost = cost;
    totalCost = quantity * cost;
}

void Inventory::setItemNumber(int itemNumber)
{
    this->itemNumber = itemNumber;
}

void Inventory::setQuantity(int quantity)
{
    this->quantity = quantity;
}

void Inventory::setCost(double cost)
{
    this->cost = cost;
}

void Inventory::setTotalCost(double totalCost)
{
    this->totalCost = this->cost * this->quantity;
}

int Inventory::getItemNumber() const
{
    return itemNumber;
}

int Inventory::getQuantity() const
{
    return quantity;
}

double Inventory::getCost() const
{
    return cost;
}

double Inventory::getTotalCost() const
{
    return totalCost;
}

void Inventory::output() const
{
    cout << itemNumber << "\t" << quantity << "\t\t" << cost << "\t" << totalCost << endl;
}

Inventory::~Inventory()
{
}

int main()
{
    cout << "ID\tQuantity\tCost\tTotal Cost" << endl;
    Inventory inv1(1, 2, 3);
    inv1.output();
    Inventory inv2(2, 3, 4);
    inv2.output();
    Inventory inv3(3, 4, 5);
    inv3.output();
    return 0;
}
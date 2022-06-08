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

int inputValue(int value)
{
    while (!(cin >> value) || value < 0)
    {
        cout << "Vui long nhap so > 0. Nhap lai: ";
    }
    return value;
}

double inputValue(double value)
{
    while (!(cin >> value) || value < 0)
    {
        cout << "Vui long nhap so > 0. Nhap lai: ";
    }
    return value;
}

int main()
{
    Inventory inv1(1, 6.95, 12);
    Inventory inv2(2, 6.95, 12);
    Inventory inv3(3, 6.95, 12);

    // int size, itemNum, qlt;
    // double cost;
    // cout << "Nhap so luong: ";
    // size = inputValue(size);

    // Inventory *inv = new Inventory[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Nhap thong tin hang hoa thu " << i + 1 << ": " << endl;
    //     cout << "Nhap ma hang: ";
    //     itemNum = inputValue(itemNum);
    //     cout << "Nhap so luong: ";
    //     qlt = inputValue(qlt);
    //     cout << "Nhap gia: ";
    //     cost = inputValue(cost);
    //     inv[i] = Inventory(itemNum, qlt, cost);
    // }
    // cout << "ID\tQuantity\tCost\tTotal Cost" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     inv[i].output();
    // }
    return 0;
}

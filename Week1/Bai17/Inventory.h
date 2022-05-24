#ifndef INVENTORY_H
#define INVENTORY_H
class Inventory
{
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    Inventory();
    Inventory(int itemNumber, int quantity, double cost);
    void setItemNumber(int itemNumber);
    void setQuantity(int quantity);
    void setCost(double cost);
    void setTotalCost(double totalCost);
    int getItemNumber() const;
    int getQuantity() const;
    double getCost() const;
    double getTotalCost() const;
    void output() const;
    ~Inventory();
};
#endif
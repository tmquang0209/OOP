#include <iostream>
#include "DivSales.h"
#include "DivSales.cpp"

using namespace std;

int inputValue(int);
int main()
{
    DivSales div[6];
    DivSales total;
    for (int i = 0; i < 6; i++)
    {
        double q1, q2, q3, q4;
        cout << "Division " << i + 1 << ": " << endl;
        cout << "Enter sales for quarter 1: ";
        q1 = inputValue(q1);
        cout << "Enter sales for quarter 2: ";
        q2 = inputValue(q2);
        cout << "Enter sales for quarter 3: ";
        q3 = inputValue(q3);
        cout << "Enter sales for quarter 4: ";
        q4 = inputValue(q4);
        div[i].setSales(q1, q2, q3, q4);
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "Division " << i + 1 << ": " << endl;
        cout << "Quarter 1: " << div[i].quarterSales(1) << endl;
        cout << "Quarter 2: " << div[i].quarterSales(2) << endl;
        cout << "Quarter 3: " << div[i].quarterSales(3) << endl;
        cout << "Quarter 4: " << div[i].quarterSales(4) << endl;
        cout << "Total: " << div[i].getTotal() << endl;
    }
    return 0;
}

int inputValue(int value)
{
    while (value < 0)
    {
        cout << "Please enter a positive number: ";
        cin >> value;
    }
    return value;
}
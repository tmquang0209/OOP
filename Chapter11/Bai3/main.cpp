#include <bits/stdc++.h>
using namespace std;

struct SalesData
{
    string department;
    double sales[4];
    double totalCost;
    double avgQuarterCost;
};

SalesData input();
void print(SalesData &sales);

int main()
{
    SalesData west{"West"},
        east{"East"},
        north{"North"},
        south{"South"};

    cout << west.department << endl;
    cout << "Sales: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Quarter " << i + 1 << ": ";
        cin >> west.sales[i];
        west.totalCost += west.sales[i];
    }
    west.avgQuarterCost = west.totalCost / 4;

    cout << east.department << endl;
    cout << "Sales: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Quarter " << i + 1 << ": ";
        cin >> east.sales[i];
        east.totalCost += east.sales[i];
    }
    east.avgQuarterCost = east.totalCost / 4;

    cout << north.department << endl;
    cout << "Sales: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Quarter " << i + 1 << ": ";
        cin >> north.sales[i];
        north.totalCost += north.sales[i];
    }
    north.avgQuarterCost = north.totalCost / 4;

    cout << south.department << endl;
    cout << "Sales: " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Quarter " << i + 1 << ": ";
        cin >> south.sales[i];
        south.totalCost += south.sales[i];
    }
    south.avgQuarterCost = south.totalCost / 4;
    return 0;
}

void print(SalesData &sales)
{
    cout << "Department: " << sales.department << endl;
    cout << "Sales: ";
    for (int i = 0; i < 4; i++)
    {
        cout << "Quarter " << (i + 1) << ": " << sales.sales[i] << endl;
    }
    cout << "Total cost: " << sales.totalCost << endl;
    cout << "Average cost: " << sales.avgQuarterCost << endl;
}
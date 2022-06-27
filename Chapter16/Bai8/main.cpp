// This program demonstrates the SimpleVector template.
#include <iostream>
#include "SimpleVector.h"
using namespace std;

template <class T>
int main()
{
    const int SIZE = 10;
    int count;
    try
    {
        SimpleVector<int> intTable(SIZE);
        SimpleVector<double> doubleTable(SIZE);
        for (count = 0; count < SIZE; count++)
        {
            intTable[count] = (count * 2);
            doubleTable[count] = (count * 2.14);
        }

        cout << "These values are in intTable:\n";
        for (count = 0; count < SIZE; count++)
            cout << intTable[count] << " ";
        cout << endl;

        cout << "These values are in doubleTable:\n";
        for (count = 0; count < SIZE; count++)
            cout << doubleTable[count] << " ";
        cout << endl;

        cout << "\nAdding 5 to each element of intTable"
             << " and doubleTable.\n";
        for (count = 0; count < SIZE; count++)
        {
            intTable[count] = intTable[count] + 5;
            doubleTable[count] = doubleTable[count] + 5.0;
        }

        cout << "These values are in intTable:\n";
        for (count = 0; count < SIZE; count++)
            cout << intTable[count] << " ";
        cout << endl;

        cout << "These values are in doubleTable:\n";
        for (count = 0; count < SIZE; count++)
            cout << doubleTable[count] << " ";
        cout << endl;

        cout << "\nIncrementing each element of intTable and"
             << " doubleTable.\n";
        for (count = 0; count < SIZE; count++)
        {
            intTable[count]++;
            doubleTable[count]++;
        }

        cout << "These values are in intTable:\n";
        for (count = 0; count < SIZE; count++)
            cout << intTable[count] << " ";
        cout << endl;
        cout << "These values are in doubleTable:\n";
        for (count = 0; count < SIZE; count++)
            cout << doubleTable[count] << " ";
        cout << endl;
    }
    catch (SimpleVector<T>::memError)
    {
        cout << "Error: memory allocation failed.\n";
    }
    catch (SimpleVector<T>::subError)
    {
        cout << "Error: subscript out of range.\n";
    }

    return 0;
}
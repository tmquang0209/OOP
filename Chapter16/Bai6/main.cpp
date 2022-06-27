#include <iostream>
#include "IntArray.h"
#include "IntArray.cpp"

using namespace std;

int main()
{
    IntArray a(5);
    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    try
    {
        cout << a[5] << endl;
    }
    catch (IntArray::ErrorIndex)
    {
        cout << "ERROR: Subscript out of range.\n";
    }
    return 0;
}
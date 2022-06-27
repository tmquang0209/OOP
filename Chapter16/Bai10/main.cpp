#include <iostream>
#include "SimpleVector.h"
#include "SortableVector.h"
#include "SortableVector.cpp"
#include <ctime>
#include <cstdlib>

using namespace std;

const int SIZE = 5;
int main()
{
    srand(time(NULL));
    SortableVector<int> sv(SIZE);
    for (int i = 0; i < SIZE; i++)
        sv[i] = rand() % 100;

    cout << "Before sorting: " << endl;
    for (int i = 0; i < SIZE; i++)
        cout << sv[i] << " ";

    sv.bubbleSort();
    cout << endl
         << "After sorting: " << endl;
    for (int i = 0; i < SIZE; i++)
        cout << sv[i] << " ";
    return 0;
}
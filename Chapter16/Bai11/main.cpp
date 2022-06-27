#include <iostream>
#include <cstdlib>
#include <ctime>
#include "SimpleVector.h"
#include "SortableVector.h"
#include "SortableVector.cpp"
#include "SearchableVector.h"

using namespace std;

const int SIZE = 10;

int main()
{
    srand(time(NULL));
    SearchableVector<int> sv(SIZE);
    for (int i = 0; i < SIZE; i++)
        sv[i] = rand() % 100;

    cout << "Array: " << endl;
    for (int i = 0; i < SIZE; i++)
        cout << sv[i] << " ";
    cout << endl;
    cout << "Number: ";
    int number;
    cin >> number;
    sv.SortAndSearch(number, 0, SIZE - 1);

    return 0;
}
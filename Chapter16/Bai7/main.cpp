#include <iostream>
#include "TestScores.h"
#include "TestScores.cpp"

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    TestScores<int> ts(arr, 5);
    cout << ts.getAverage() << endl;
}
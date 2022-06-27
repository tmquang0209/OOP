#include <iostream>
#include "TestScores.h"

using namespace std;

template <class T>
TestScores<T>::TestScores()
{
    size = 0;
    avg = 0;
}

template <class T>
TestScores<T>::TestScores(T arr[], int size)
{
    this->size = size;
    calcAverage(arr, size);
}

template <class T>
void TestScores<T>::calcAverage(T arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    avg = sum / size;
}

template <class T>
double TestScores<T>::getAverage() const
{
    return avg;
}

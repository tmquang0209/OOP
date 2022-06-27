#include <iostream>
using namespace std;
#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

template <class T>
class SortableVector : public SimpleVector<T>
{
public:
    SortableVector() : SimpleVector<T>()
    {
    }

    SortableVector(int size) : SimpleVector<T>(size)
    {
    }

    void bubbleSort();
};
#endif
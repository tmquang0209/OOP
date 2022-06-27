#include <iostream>
#include "SortableVector.h"

template <class T>
void SortableVector<T>::bubbleSort()
{
    for (int i = 0; i < this->size(); i++)
    {
        for (int j = 0; j < this->size() - 1; j++)
        {
            if (this->getElementAt(j) > this->getElementAt(j + 1))
            {
                T temp = this->getElementAt(j);
                this->operator[](j) = this->operator[](j + 1);
                this->operator[](j + 1) = temp;
            }
        }
    }
}
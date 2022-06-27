#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H
#include "SimpleVector.h"
#include "SortableVector.h"

template <class T>
class SearchableVector : public SortableVector<T>
{
public:
    // Default constructor
    SearchableVector() : SortableVector<T>()
    {
    }

    // Constructor
    SearchableVector(int size) : SortableVector<T>(size)
    {
    }

    // Copy constructor
    SearchableVector(const SearchableVector &);

    // Accessor to find an item
    int findItem(const T, int, int);
    void SortAndSearch(const T, int, int);
};

//*******************************************************
// Copy constructor *
//*******************************************************

template <class T>
SearchableVector<T>::SearchableVector(const SearchableVector &obj) : SortableVector<T>(obj.size())
{
    for (int count = 0; count < this->size(); count++)
        this->operator[](count) = obj[count];
}

//********************************************************
// findItem function *
// This function searches for item. If item is found *
// the subscript is returned. Otherwise −1 is returned. *
//********************************************************

template <class T>
int SearchableVector<T>::findItem(const T item, int l, int r)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (SimpleVector<T>::getElementAt(mid) == item)
            return mid;
        if (SimpleVector<T>::getElementAt(mid) > item)
            return findItem(item, l, mid - 1);
        return findItem(item, mid + 1, r);
    }
    return -1;
}

template <class T>
void SearchableVector<T>::SortAndSearch(const T item, int l, int r)
{
    SortableVector<T>::bubbleSort();
    cout << "After sorting: ";
    for (int i = 0; i <= r; i++)
        cout << this->operator[](i) << " ";
    cout << endl;

    int index = findItem(item, l, r);
    if (index == -1)
        cout << item << " not found" << endl;
    else
        cout << item << " found at index " << index << endl;
}
#endif
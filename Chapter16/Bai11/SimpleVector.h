// SimpleVector class template
#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H
#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

template <class T>
class SimpleVector
{
private:
    T *aptr;
    int arraySize;

public:
    class subError
    {
    };
    class memError
    {
    };

    SimpleVector()
    {
        aptr = 0;
        arraySize = 0;
    }

    SimpleVector(int);
    SimpleVector(const SimpleVector &);
    ~SimpleVector();
    int size() const
    {
        return arraySize;
    }
    T getElementAt(int position);
    T &operator[](const int &);
};
template <class T>
SimpleVector<T>::SimpleVector(int s)
{
    arraySize = s;
    try
    {
        aptr = new T[s];
    }
    catch (bad_alloc)
    {
        throw memError();
    }

    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = 0;
}

template <class T>
SimpleVector<T>::SimpleVector(const SimpleVector &obj)
{
    arraySize = obj.arraySize;

    aptr = new T[arraySize];
    if (aptr == 0)
        throw memError();

    for (int count = 0; count < arraySize; count++)
        *(aptr + count) = *(obj.aptr + count);
}

template <class T>
SimpleVector<T>::~SimpleVector()
{
    if (arraySize > 0)
        delete[] aptr;
}

template <class T>
T SimpleVector<T>::getElementAt(int sub)
{
    if (sub < 0 || sub >= arraySize)
        throw subError();
    return aptr[sub];
}

template <class T>
T &SimpleVector<T>::operator[](const int &sub)
{
    if (sub < 0 || sub >= arraySize)
        throw subError();
    return aptr[sub];
}
#endif
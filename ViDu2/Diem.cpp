#include "Diem.h"

template <class T>
Diem<T>::Diem()
{
    diem = 0;
}

template <class T>
Diem<T>::Diem(T d)
{
    diem = d;
}

template <class T>
void Diem<T>::setDiem(T d)
{

    diem = d;
}
template <class T>
T Diem<T>::getDiem() const
{
    return diem;
}

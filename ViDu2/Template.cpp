#include <iostream>
#include "Date.h"
#include "Diem.h"

using namespace std;

template <class T>
T nhan10(T so)
{
    return so*10;
}

template <class T1, class T2>
double SoKmTrenLitXang(T1 km, T2 lit)
{
    return km/lit;
}
int main()
{
/*
    cout<<"Truyen vao so nguyen: "<<nhan10(3)<<endl;
    cout<<"Truyen vao so thuc: "<<nhan10(3.5)<<endl;

    cout<<"So km tren 1 lit xang la:"<<SoKmTrenLitXang(100.555,10.5)<<endl;

*/
    Diem<int> d1(5);
    Diem<float> d2(5.5);

    //d1.setDiem(9);
    //d2.setDiem(9.5);

    cout<<"Diem d1: "<<d1.getDiem()<<endl;
    cout<<"Diem d2: "<<d2.getDiem()<<endl;

    return 0;
}

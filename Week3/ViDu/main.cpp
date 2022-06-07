#include <iostream>
#include "connguoi.h"
#include "connguoi.cpp"
#include "sinhvien.h"
#include "sinhvien.cpp"
#include "hocsinh.h"
#include "hocsinh.cpp"

using namespace std;

int main()
{
    connguoi nguoi1("Quang", 18);
    nguoi1.in();

    cout << endl;
    sinhvien sv1("Nguyen Van A", 18, "CNTT", "12345");
    sv1.in();

    cout << endl;
    hocsinh hs1("Nguyen Van B", 18, "CNTT", "12345", "123456789");
    hs1.in();
}
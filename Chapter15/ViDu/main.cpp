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
    connguoi nguoi1("Quang", "02/09/2003", "Vinh Phuc");
    nguoi1.in();

    cout << endl;
    sinhvien sv1("Nguyen Van A", "12/01/2003", "Vinh Phuc", "TLU", "TT34", "0123456789", "CNTT", "A41603");
    sv1.in();

    cout << endl;
    hocsinh hs1("Nguyen Van B", "11/01/2001", "Ha Noi", "CNTT", "12345", "123456789");
    hs1.in();
}
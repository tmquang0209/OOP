#include <iostream>
#include "NhanVien.h"
#include "NhanVien.cpp"
#include "NhanVienVanPhong.h"
#include "NhanVienVanPhong.cpp"
#include "NhanVienSanXuat.h"
#include "NhanVienSanXuat.cpp"

using namespace std;

const int SIZE = 3;
int main()
{
    NhanVien *nv[SIZE] = {new NhanVienSanXuat(1, 15, 11),
                          new NhanVienVanPhong(2, 26, 2000),
                          new NhanVienVanPhong(3, 30, 1500)};

    for (int i = 0; i < SIZE; i++)
    {
        nv[i]->print();
        cout << endl;
    }
}

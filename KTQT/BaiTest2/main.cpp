#include <bits/stdc++.h>
#include "HoaDon.h"
#include "HoaDon.cpp"
#include "HoaDonNuoc.h"
#include "HoaDonNuoc.cpp"
#include "HoaDonDien.h"
#include "HoaDonDien.cpp"
using namespace std;

// HoaDon max1(HoaDon hd1, HoaDon hd2)
// {
//     if (hd1.soTien > hd2.soTien)
//         return hd1;
//     return hd2;
// }
template <class T>
T max2(T &hd1, T &hd2)
{
    if (hd1 > hd2)
        return hd1;
    return hd2;
}

void thongKe(HoaDon *hd[], int size)
{
    int demSoHD = size;
    int demSoTien = 0;
    float soTienLonNhat = 0;
    for (int i = 0; i < size; i++)
    {
        if (hd[i]->getSoTien() > soTienLonNhat)
        {
            soTienLonNhat = hd[i]->getSoTien();
        }
        demSoTien += hd[i]->getSoTien();
    }
    fstream fileDat;
    fileDat.open("dat.dat", ios::out | ios::binary);
    fileDat.write((char *)&demSoHD, sizeof(int));
    fileDat.write((char *)&demSoTien, sizeof(int));
    fileDat.write((char *)&soTienLonNhat, sizeof(float));
    fileDat.close();

    int soHD, soTien, soTienLon;
    fileDat.open("dat.dat", ios::in | ios::binary);
    fileDat.read((char *)&soHD, sizeof(int));
    fileDat.read((char *)&soTien, sizeof(int));
    fileDat.read((char *)&soTienLon, sizeof(float));

    cout << "=======================================" << endl;
    cout << "So hoa don: " << soHD << endl;
    cout << "So tien: " << soTien << endl;
    cout << "So tien lon nhat: " << soTienLonNhat << endl;
    cout << "=======================================" << endl;
    fileDat.close();
}

int main()
{
    //? Bai 1 - > 3;
    HoaDon *hd[3] = {new HoaDon("Mua rau", "Quang 1", "Zang 1", 100),
                     new HoaDon("Tien dien", "Quang 2", "Zang 2", 200),
                     new HoaDon("Di choi", "Quang 3", "Zang 3", 300)};
    // for (int i = 0; i < 3; i++)
    // {
    //     hd[i] = new HoaDon();
    //     hd[i]->Nhap();
    // }
    cout << "===== Xuat hoa don =====" << endl;
    for (int i = 0; i < 3; i++)
    {
        hd[i]->HienThi();
        cout << endl;
    }
    cout << "========================" << endl;
    cout << "So doi tuong duoc tao:" << HoaDon::getCount() << endl;
    cout << "========================" << endl;

    HoaDon hd1("Mua rau", "Quang 1", "Zang 1", 100);
    HoaDon hd2("Tien dien", "Quang 2", "Zang 2", 200);

    if (max2(hd1, hd2) == hd1)
    {
        cout << "Hoa don 1 lon hon hoa don 2" << endl;
    }
    else
    {
        cout << "Hoa don 2 lon hon hoa don 1" << endl;
    }

    //? Bai 4,5,6
    // HoaDon *hd[5] = {
    //     new HoaDonNuoc("Nuoc", "Quang 1", "Zang 1", 10, 20),
    //     new HoaDonDien("Nuoc", "Quang 2", "Zang 2", 20, 30),
    //     new HoaDonNuoc("Nuoc", "Quang 3", "Zang 3", 30, 40),
    //     new HoaDonDien("Nuoc", "Quang 4", "Zang 4", 40, 50),
    //     new HoaDonNuoc("Nuoc", "Quang 5", "Zang 5", 50, 60),
    // };
    // for (int i = 0; i < 5; i++)
    // {
    //     hd[i]->HienThi();
    //     cout << endl;
    // }
    // thongKe(hd, 5);
    return 0;
}

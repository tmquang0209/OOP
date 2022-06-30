#include <bits/stdc++.h>
#include "HoaDonNuoc.h"
using namespace std;

HoaDonNuoc::HoaDonNuoc() : HoaDon()
{
    soNuoc = 0;
    donGia = 0;
}

HoaDonNuoc::HoaDonNuoc(string tenHoaDon, string benA, string benB,
                       float soNuoc, float donGia) : HoaDon(tenHoaDon, benA, benB)
{
    this->soNuoc = soNuoc;
    this->donGia = donGia;
    tinhSoTien();
}

void HoaDonNuoc::Nhap()
{
    HoaDon::Nhap();
    cout << "Nhap so nuoc: ";
    cin >> soNuoc;
    cin.ignore();
    cout << "Nhap don gia: ";
    cin >> donGia;
    cin.ignore();
}

void HoaDonNuoc::HienThi()
{
    HoaDon::HienThi();
    cout << "So nuoc: " << soNuoc << endl;
    cout << "Don gia: " << donGia << endl;
}

void HoaDonNuoc::tinhSoTien()
{
    HoaDon::setSoTien(soNuoc * donGia * 1.25);
}
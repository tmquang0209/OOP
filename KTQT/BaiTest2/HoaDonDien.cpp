#include <bits/stdc++.h>
#include "HoaDonDien.h"
using namespace std;

HoaDonDien::HoaDonDien() : HoaDon()
{
    soDien = 0;
    donGia = 0;
}

HoaDonDien::HoaDonDien(string tenHoaDon, string benA, string benB, float soDien, float donGia) : HoaDon(tenHoaDon, benA, benB)
{
    this->soDien = soDien;
    this->donGia = donGia;
    tinhSoTien();
}

void HoaDonDien::Nhap()
{
    HoaDon::Nhap();
    cout << "Nhap so dien: ";
    cin >> soDien;
    cin.ignore();
    cout << "Nhap don gia: ";
    cin >> donGia;
    cin.ignore();
}

void HoaDonDien::HienThi()
{
    HoaDon::HienThi();
    cout << "So dien: " << soDien << endl;
    cout << "Don gia: " << donGia << endl;
}

void HoaDonDien::tinhSoTien()
{
    HoaDon::setSoTien(soDien * donGia * 1.5);
}
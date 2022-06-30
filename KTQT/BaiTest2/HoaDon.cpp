#include <bits/stdc++.h>
#include "HoaDon.h"
using namespace std;

int HoaDon::count = 0;

HoaDon::HoaDon()
{
    tenHoaDon = "";
    benA = "";
    benB = "";
    soTien = 0;
    count++;
}

HoaDon::HoaDon(string tenHoaDon, string benA, string benB, float soTien)
{
    this->tenHoaDon = tenHoaDon;
    this->benA = benA;
    this->benB = benB;
    this->soTien = soTien;
    count++;
}

HoaDon::HoaDon(string tenHoaDon, string benA, string benB)
{
    this->tenHoaDon = tenHoaDon;
    this->benA = benA;
    this->benB = benB;
    count++;
}

float HoaDon::getSoTien() const
{
    return soTien;
}

void HoaDon::setSoTien(float soTien)
{
    this->soTien = soTien;
}

bool HoaDon::operator>(HoaDon &hd)
{
    return (soTien > hd.soTien) ? true : false;
}

bool HoaDon::operator==(HoaDon &hd)
{
    return (tenHoaDon == hd.tenHoaDon) ? true : false;
}

void HoaDon::Nhap()
{
    cout << "Nhap ten hoa don: ";
    getline(cin, tenHoaDon);
    cout << "Nhap ben A: ";
    getline(cin, benA);
    cout << "Nhap ben B: ";
    getline(cin, benB);
    cout << "Nhap so tien: ";
    cin >> soTien;
    cin.ignore();
}

void HoaDon::HienThi()
{
    cout << "Ten hoa don: " << tenHoaDon << endl;
    cout << "Ben A: " << benA << endl;
    cout << "Ben B: " << benB << endl;
    cout << "So tien: " << soTien << " nghin VND" << endl;
}

ostream &operator<<(ostream &os, HoaDon &obj)
{
    os << "Ten hoa don: " << obj.tenHoaDon << endl;
    os << "Ben A: " << obj.benA << endl;
    os << "Ben B: " << obj.benB << endl;
    os << "So tien: " << obj.soTien << " nghin VND" << endl;
    return os;
}

int HoaDon::getCount()
{
    return count;
}
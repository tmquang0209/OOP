#ifndef HOADONDIEN_H
#define HOADONDIEN_H
#include <bits/stdc++.h>
#include "HoaDon.h"
using namespace std;
class HoaDonDien : public HoaDon
{
private:
    float soDien;
    float donGia;

public:
    HoaDonDien();
    HoaDonDien(string tenHoaDon, string benA, string benB, float soDien, float donGia);
    void Nhap();
    void HienThi();
    void tinhSoTien();
};
#endif
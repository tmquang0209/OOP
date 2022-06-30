#ifndef HOADONNUOC_H
#define HOADONNUOC_H
#include <bits/stdc++.h>
#include "HoaDon.h"
using namespace std;
class HoaDonNuoc : public HoaDon
{
private:
    float soNuoc;
    float donGia;

public:
    HoaDonNuoc();
    HoaDonNuoc(string tenHoaDon, string benA, string benB, float soNuoc, float donGia);
    void Nhap();
    void HienThi();
    void tinhSoTien();
};
#endif
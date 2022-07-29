#ifndef HOADON_H
#define HOADON_H
#include <bits/stdc++.h>
using namespace std;
class HoaDon
{
private:
    string tenHoaDon;
    string benA;
    string benB;
    float soTien;
    static int count;
    friend HoaDon max1(HoaDon, HoaDon);

public:
    HoaDon();
    HoaDon(string tenHoaDon, string benA, string benB, float soTien);
    HoaDon(string tenHoaDon, string benA, string benB);
    float getSoTien() const;
    void setSoTien(float soTien);
    bool operator>(HoaDon &);
    bool operator==(HoaDon &);
    virtual void Nhap();
    virtual void HienThi();
    static int getCount();
    friend ostream &operator<<(ostream &, HoaDon &);
};
#endif
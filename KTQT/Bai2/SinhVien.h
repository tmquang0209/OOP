#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
class SinhVien
{
private:
    string maSV;
    string hoTen;
    Date ngaySinh;
    static int count;

public:
    SinhVien();
    SinhVien(string _maSV, string _hoTen, Date _date);
    void print();
    static void getCount();
};
#endif
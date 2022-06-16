#include <iostream>
#include "SinhVien.h"
#include "Date.h"
#include <string>

using namespace std;

int SinhVien::count = 0;

SinhVien::SinhVien()
{
    maSV = "";
    hoTen = "";
    ngaySinh = Date();
    count++;
}

SinhVien::SinhVien(string maSV, string hoTen, Date ngaySinh)
{
    this->maSV = maSV;
    this->hoTen = hoTen;
    this->ngaySinh = ngaySinh;
    count++;
}

void SinhVien::print()
{
    cout << "Ma sinh vien: " << maSV << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Ngay sinh: ";
    ngaySinh.print();
}

void SinhVien::getCount()
{
    cout << "Count: " << count << endl;
}
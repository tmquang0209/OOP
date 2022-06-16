#ifndef NHANVIENVANPHONG_H
#define NHANVIENVANPHONG_H
#include "NhanVien.h"
class NhanVienVanPhong : public NhanVien
{
private:
    int numOfWork;
    double basicSalary;

public:
    NhanVienVanPhong();
    NhanVienVanPhong(int, int, double);
    void calcSalary();
    void setInfor(int, int, double);
    void print();
};
#endif
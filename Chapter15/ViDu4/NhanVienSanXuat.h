#ifndef NHANVIENSANXUAT_H
#define NHANVIENSANXUAT_H
#include "NhanVien.h"

class NhanVienSanXuat : public NhanVien
{
private:
    int numOfProduct;
    double salaryPerProduct;

public:
    NhanVienSanXuat();
    NhanVienSanXuat(int, int, double);
    void calcSalary();
    void setInfor(int, int, double);
    void print();
};
#endif
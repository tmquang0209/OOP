#include <iostream>
#include "NhanVienSanXuat.h"
using namespace std;

NhanVienSanXuat::NhanVienSanXuat() : NhanVien()
{
    numOfProduct = 0;
    salaryPerProduct = 0;
}

NhanVienSanXuat::NhanVienSanXuat(int employeeID, int numOfProduct, double salaryPerProduct)
{
    setInfor(employeeID, numOfProduct, salaryPerProduct);
}

void NhanVienSanXuat::setInfor(int employeeID, int numOfProduct, double salaryPerProduct)
{
    setEmpId(employeeID);
    this->numOfProduct = numOfProduct;
    this->salaryPerProduct = salaryPerProduct;
    calcSalary();
}

void NhanVienSanXuat::calcSalary()
{
    setSalary(numOfProduct * salaryPerProduct);
}

void NhanVienSanXuat::print()
{
    NhanVien::print();
    cout << "So luong san pham: " << numOfProduct << endl
         << "Luong/san pham: " << salaryPerProduct << endl;
}
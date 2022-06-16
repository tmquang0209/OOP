#include <iostream>
#include "NhanVienVanPhong.h"

using namespace std;

NhanVienVanPhong::NhanVienVanPhong() : NhanVien()
{
    numOfWork = 0;
    basicSalary = 0;
}

NhanVienVanPhong::NhanVienVanPhong(int employeeID, int numOfWork, double basicSalary)
{
    setInfor(employeeID, numOfWork, basicSalary);
}

void NhanVienVanPhong::setInfor(int employeeID, int numOfWork, double basicSalary)
{
    this->numOfWork = numOfWork;
    this->basicSalary = basicSalary;
    setEmpId(employeeID);
    calcSalary();
}

void NhanVienVanPhong::calcSalary()
{
    setSalary(numOfWork * basicSalary / 30);
}

void NhanVienVanPhong::print()
{
    NhanVien::print();
    cout << "So ngay cong: " << numOfWork << endl
         << "Luong co ban: " << basicSalary << endl;
}
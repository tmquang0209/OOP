#include <iostream>
#include "NhanVien.h"

using namespace std;

NhanVien::NhanVien()
{
    employeeID = 0;
    salary = 0;
}

NhanVien::NhanVien(int employeeID, double salary)
{
    setInfor(employeeID, salary);
}

void NhanVien::setInfor(int employeeID, double salary)
{
    this->employeeID = employeeID;
    this->salary = salary;
}

void NhanVien::setEmpId(int employeeID)
{
    this->employeeID = employeeID;
}

void NhanVien::setSalary(double salary)
{
    this->salary = salary;
}

void NhanVien::print()
{
    cout << "ID: " << employeeID << endl
         << "Luong: " << salary << endl;
}
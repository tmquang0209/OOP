#include <iostream>
#include "Payroll.h"

using namespace std;

Payroll::Payroll()
{
    empId = 0;
    hourlyRate = 0;
    hoursWorked = 0;
    grossPay = 0;
}

Payroll::Payroll(int empId, double hourlyRate, double hoursWorked)
{
    this->empId = empId;
    this->hourlyRate = hourlyRate;
    this->hoursWorked = hoursWorked;
    this->grossPay = hourlyRate * hoursWorked;
}

void Payroll::setEmpId(int empId)
{
    this->empId = empId;
}

void Payroll::setHoursWorked(double hoursWorked)
{
    this->hoursWorked = hoursWorked;
}

void Payroll::setGrossPay()
{
    this->grossPay = hourlyRate * hoursWorked;
}

void Payroll::setHourlyRate(double hourlyRate)
{
    this->hourlyRate = hourlyRate;
}

int Payroll::getEmpId() const
{
    return empId;
}

double Payroll::getHoursWorked() const
{
    return this->hoursWorked;
}

double Payroll::getHourlyRate() const
{
    return this->hourlyRate;
}

double Payroll::getGrossPay() const
{
    return this->grossPay;
}

void Payroll::printPayroll() const
{
    cout << empId << "\t\t" << hourlyRate << "\t\t" << hoursWorked << "\t\t" << grossPay * 7 << endl;
}

Payroll::~Payroll()
{
}

int main()
{
    int size;
    cout << "Nhap so luong nhan vien: ";
    cin >> size;
    Payroll *payroll = new Payroll[size];
    int id;
    double hourlyRate, hoursWorked;
    cout << "Nhap luong moi gio: ";
    cin >> hourlyRate;

    for (int i = 0; i < size; i++)
    {
        cout << "Nhap thong tin nhan vien thu " << i + 1 << ": " << endl;
        cout << "Nhap ma nhan vien: ";
        cin >> id;
        payroll[i].setEmpId(id);
        cout << "Nhap so gio lam: ";
        do
        {
            cin >> hoursWorked;
        } while (hoursWorked < 0 || hoursWorked > 60);
        payroll[i].setHoursWorked(hoursWorked);
        payroll[i].setHourlyRate(hourlyRate);
        payroll[i].setGrossPay();
    }

    cout << "Ma nhan vien\tLuong moi gio\tSo gio lam\tLuong tuan" << endl;
    for (int i = 0; i < size; i++)
    {
        payroll[i].printPayroll();
    }

    return 0;
}
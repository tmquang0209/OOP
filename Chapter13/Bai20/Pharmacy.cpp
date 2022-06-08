/*
Mục đích:
+ Lưu giá trị của ít nhất năm loại thuốc
! Có thể cập nhật biến phí của lớp PatientAccount
Created by: TMQ
Create date: 08/05/2022
*/
#include <iostream>
#include "Pharmacy.h"

Pharmacy::Pharmacy()
{
    medicineCost1 = 10;
    medicineCost2 = 11;
    medicineCost3 = 12;
    medicineCost4 = 13;
    medicineCost5 = 14;
}

Pharmacy::Pharmacy(double medicineCost1, double medicineCost2, double medicineCost3, double medicineCost4, double medicineCost5)
{
    this->medicineCost1 = medicineCost1;
    this->medicineCost2 = medicineCost2;
    this->medicineCost3 = medicineCost3;
    this->medicineCost4 = medicineCost4;
    this->medicineCost5 = medicineCost5;
}

void Pharmacy::setMedicineCost1(double medicineCost1)
{
    this->medicineCost1 = medicineCost1;
}

void Pharmacy::setMedicineCost2(double medicineCost2)
{
    this->medicineCost2 = medicineCost2;
}

void Pharmacy::setMedicineCost3(double medicineCost3)
{
    this->medicineCost3 = medicineCost3;
}

void Pharmacy::setMedicineCost4(double medicineCost4)
{
    this->medicineCost4 = medicineCost4;
}

void Pharmacy::setMedicineCost5(double medicineCost5)
{
    this->medicineCost5 = medicineCost5;
}

double Pharmacy::getMedicineCost1()
{
    return medicineCost1;
}

double Pharmacy::getMedicineCost2()
{
    return medicineCost2;
}

double Pharmacy::getMedicineCost3()
{
    return medicineCost3;
}

double Pharmacy::getMedicineCost4()
{
    return medicineCost4;
}

double Pharmacy::getMedicineCost5()
{
    return medicineCost5;
}

Pharmacy::~Pharmacy()
{
}
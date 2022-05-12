/*
Mục đích:
+ Lưu giá trị của ít nhất năm loại phẫu thuật
! Có thể cập nhật biến phí của lớp PatientAccount
Created by: TMQ
Create date: 08/05/2022
*/
#include <iostream>
#include "Surgery.h"

Surgery::Surgery()
{
    surgeryCost1 = 20;
    surgeryCost2 = 21;
    surgeryCost3 = 22;
    surgeryCost4 = 23;
    surgeryCost5 = 24;
}

Surgery::Surgery(double surgeryCost1, double surgeryCost2, double surgeryCost3, double surgeryCost4, double surgeryCost5)
{
    this->surgeryCost1 = surgeryCost1;
    this->surgeryCost2 = surgeryCost2;
    this->surgeryCost3 = surgeryCost3;
    this->surgeryCost4 = surgeryCost4;
    this->surgeryCost5 = surgeryCost5;
}

void Surgery::setSurgeryCost1(double surgeryCost1)
{
    this->surgeryCost1 = surgeryCost1;
}

void Surgery::setSurgeryCost2(double surgeryCost2)
{
    this->surgeryCost2 = surgeryCost2;
}

void Surgery::setSurgeryCost3(double surgeryCost3)
{
    this->surgeryCost3 = surgeryCost3;
}

void Surgery::setSurgeryCost4(double surgeryCost4)
{
    this->surgeryCost4 = surgeryCost4;
}

void Surgery::setSurgeryCost5(double surgeryCost5)
{
    this->surgeryCost5 = surgeryCost5;
}

double Surgery::getSurgeryCost1()
{
    return surgeryCost1;
}

double Surgery::getSurgeryCost2()
{
    return surgeryCost2;
}

double Surgery::getSurgeryCost3()
{
    return surgeryCost3;
}

double Surgery::getSurgeryCost4()
{
    return surgeryCost4;
}

double Surgery::getSurgeryCost5()
{
    return surgeryCost5;
}

Surgery::~Surgery()
{
}
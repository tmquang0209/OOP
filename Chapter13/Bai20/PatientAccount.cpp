/*
Mục đích:
+ Lưu trữ tổng số chi phí của bệnh nhân
+ Theo dõi số ngày nằm trong bệnh viện
? Quyết định mực phí hằng ngày của bệnh viện
Create by: TMQ
Create date: 08/05/2022
*/

#include <iostream>
#include "PatientAccount.h"

using namespace std;

PatientAccount::PatientAccount()
{
    days = 0;
    charge = 0;
    rate = 100.0;
}

PatientAccount::PatientAccount(int days, double charge, double rate)
{
    this->days = days;
    this->charge = charge;
    this->rate = rate;
}

void PatientAccount::setDays(int days)
{
    this->days = days;
}

void PatientAccount::setCharge(double charge)
{
    this->charge = charge;
}

void PatientAccount::setRate(double rate)
{
    this->rate = rate;
}

void PatientAccount::setSurgeryCharges(int choice)
{
    switch (choice)
    {
    case 1:
        charge += surgery.getSurgeryCost1();
        break;
    case 2:
        charge += surgery.getSurgeryCost2();
        break;
    case 3:
        charge += surgery.getSurgeryCost3();
        break;
    case 4:
        charge += surgery.getSurgeryCost4();
        break;
    case 5:
        charge += surgery.getSurgeryCost5();
        break;
    case 0:
        break;
    default:
        cout << "Lua chon khong phu hop!" << endl;
        break;
    }
}

void PatientAccount::setPharmacyCharges(int choice)
{
    switch (choice)
    {
    case 1:
        charge += pharmacy.getMedicineCost1();
        break;
    case 2:
        charge += pharmacy.getMedicineCost2();
        break;
    case 3:
        charge += pharmacy.getMedicineCost3();
        break;
    case 4:
        charge += pharmacy.getMedicineCost4();
        break;
    case 5:
        charge += pharmacy.getMedicineCost5();
        break;
    case 0:
        break;
    default:
        cout << "Lua chon khong phu hop!" << endl;
        break;
    }
}

int PatientAccount::getDays()
{
    return days;
}

double PatientAccount::getCharge()
{
    return charge;
}

double PatientAccount::getRate()
{
    return rate;
}

double PatientAccount::getCost()
{
    return rate * days + charge;
}

PatientAccount::~PatientAccount()
{
}
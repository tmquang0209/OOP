/*
Mục đích:
+ Lưu trữ tổng số chi phí của bệnh nhân
+ Theo dõi số ngày nằm trong bệnh viện
? Quyết định mực phí hằng ngày của bệnh viện
Create by: TMQ
Create date: 08/05/2022
*/
#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
#include "Pharmacy.h"
#include "Pharmacy.cpp"
#include "Surgery.h"
#include "Surgery.cpp"

class PatientAccount
{
private:
    int days;
    double charge;
    double rate;
    Surgery surgery;
    Pharmacy pharmacy;

public:
    PatientAccount();
    PatientAccount(int, double, double);
    void setDays(int);
    void setCharge(double);
    void setRate(double);
    void setSurgeryCharges(int);
    void setPharmacyCharges(int);

    int getDays();
    double getCharge();
    double getRate();
    double getCost();

    ~PatientAccount();
};
#endif
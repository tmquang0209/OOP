/*
Mục đích:
+ Lưu trữ tổng số chi phí của bệnh nhân
+ Theo dõi số ngày nằm trong bệnh viện
? Quyết định mực phí hằng ngày của bệnh viện
Create by: TMQ
Create date: 08/05/2022
*/
#include "Surgery.h"
#include "Pharmacy.h"

#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

class PatientAccount
{
private:
    int days;
    double charge;
    double rate;
    Surgery sergery;
    Pharmacy pharmacy;

public:
    PatientAccount();
};
#endif
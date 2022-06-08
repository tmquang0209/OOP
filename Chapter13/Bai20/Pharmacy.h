#ifndef PHARMACY_H
#define PHARMACY_H
class Pharmacy
{
private:
    double medicineCost1;
    double medicineCost2;
    double medicineCost3;
    double medicineCost4;
    double medicineCost5;

public:
    Pharmacy();
    Pharmacy(double, double, double, double, double);
    void setMedicineCost1(double);
    void setMedicineCost2(double);
    void setMedicineCost3(double);
    void setMedicineCost4(double);
    void setMedicineCost5(double);
    double getMedicineCost1();
    double getMedicineCost2();
    double getMedicineCost3();
    double getMedicineCost4();
    double getMedicineCost5();
    ~Pharmacy();
};
#endif
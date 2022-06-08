#ifndef SURGERY_H
#define SURGERY_H
class Surgery
{
private:
    double surgeryCost1;
    double surgeryCost2;
    double surgeryCost3;
    double surgeryCost4;
    double surgeryCost5;

public:
    Surgery();
    Surgery(double, double, double, double, double);
    void setSurgeryCost1(double);
    void setSurgeryCost2(double);
    void setSurgeryCost3(double);
    void setSurgeryCost4(double);
    void setSurgeryCost5(double);
    double getSurgeryCost1();
    double getSurgeryCost2();
    double getSurgeryCost3();
    double getSurgeryCost4();
    double getSurgeryCost5();
    ~Surgery();
};
#endif
#ifndef DIVSALES_H
#define DIVSALES_H
class DivSales
{
private:
    double sales[4];
    static double totalSales;

public:
    DivSales();
    void setSales(double, double, double, double);
    double quarterSales(int);
    double getTotal();
};
#endif
#ifndef PAYMENT_H
#define PAYMENT_H
class Payment
{
private:
    double loan;
    double interest;
    int years;

public:
    Payment();
    void setLoan(double);
    void setInterest(double);
    void setYears(int);
    double getLoan() const;
    double getInterest() const;
    int getYears() const;
    double getPayment() const;
    ~Payment();
};
#endif
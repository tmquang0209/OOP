#include <iostream>
#include <math.h>
#include "Payment.h"

using namespace std;

Payment::Payment()
{
    loan = 0;
    interest = 0;
    years = 0;
}

void Payment::setLoan(double loan)
{
    this->loan = loan;
}

void Payment::setInterest(double interest)
{
    this->interest = interest;
}

void Payment::setYears(int years)
{
    this->years = years;
}

double Payment::getLoan() const
{
    return loan;
}

double Payment::getInterest() const
{
    return interest;
}

int Payment::getYears() const
{
    return years;
}

double Payment::getPayment() const
{
    double term = pow(1 + interest / (100 * 12), 12 * years);
    return (loan * interest / (100 * 12) * term) / (term - 1);
}

Payment::~Payment()
{
}

double inputValue(double value)
{
    while (!(cin >> value) || value < 0)
    {
        cout << "Vui long nhap gia tri > 0. Nhap lai: ";
    }
    return value;
}

int inputValue(int value)
{
    while (!(cin >> value) || value < 0)
    {
        cout << "Vui long nhap gia tri > 0. Nhap lai: ";
    }
    return value;
}

int main()
{
    Payment payment;
    double inputLoan;
    double inputInterest;
    int inputYears;
    cout << "Nhap khoan vay: ";
    inputLoan = inputValue(inputLoan);
    payment.setLoan(inputLoan);
    cout << "Nhap lai suat: ";
    inputInterest = inputValue(inputInterest);
    payment.setInterest(inputInterest);
    cout << "Nhap so nam vay: ";
    inputYears = inputValue(inputYears);
    payment.setYears(inputYears);
    cout << "Tien lai phai tra: " << payment.getPayment() << endl;
}
#ifndef PAYROLL_H
#define PAYROLL_H
class Payroll
{
private:
    int empId;
    double hourlyRate;
    double hoursWorked;
    double grossPay;

public:
    Payroll();
    Payroll(int empId, double hourlyRate, double hoursWorked);
    void setEmpId(int empId);
    void setHoursWorked(double hoursWorked);
    void setHourlyRate(double hourlyRate);
    void setGrossPay();
    int getEmpId() const;
    double getHourlyRate() const;
    double getHoursWorked() const;
    double getGrossPay() const;
    void printPayroll() const;
    ~Payroll();
};
#endif
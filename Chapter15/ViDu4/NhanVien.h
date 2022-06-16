#ifndef NHANVIEN_H
#define NHANVIEN_H
class NhanVien
{
private:
    int employeeID;
    double salary;

public:
    NhanVien();
    NhanVien(int, double);
    virtual void calcSalary() = 0;
    void setInfor(int, double);
    void setEmpId(int);
    void setSalary(double);
    virtual void print();
};
#endif
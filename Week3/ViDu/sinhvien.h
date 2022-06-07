#ifndef SINHVIEN_H
#define SINHVIEN_H
#include "hocsinh.h"
#include <string>
class sinhvien : public hocsinh
{
private:
    string chuyenNganh;
    string msv;

public:
    sinhvien();
    sinhvien(string ht, int t, string truong, string lop, string sdt, string cn, string msv);
    void setChuyenNganh(string);
    void setMsv(string);
    string getChuyenNganh() const;
    string getMsv() const;
    void in();
};
#endif
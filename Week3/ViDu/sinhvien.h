#ifndef SINHVIEN_H
#define SINHVIEN_H
#include "connguoi.h"
#include <string>
class sinhvien : public connguoi
{
private:
    string chuyenNganh;
    string msv;

public:
    sinhvien();
    sinhvien(string ht, int t, string cn, string msv);
    void setChuyenNganh(string);
    void setMsv(string);
    string getChuyenNganh() const;
    string getMsv() const;
    void in();
};
#endif
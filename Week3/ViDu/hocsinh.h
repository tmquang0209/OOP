#ifndef HOCSINH_H
#define HOCSINH_H
#include "connguoi.h"
#include <string>
class hocsinh : public connguoi
{
private:
    string truong;
    string lop;
    string soDienThoai;

public:
    hocsinh();
    hocsinh(string ht, int t, string truong, string lop, string sdt);
    void setTruong(string);
    void setLop(string);
    void setSoDienThoai(string);
    string getTruong() const;
    string getLop() const;
    string getSoDienThoai() const;
    void in();
};
#endif
#include "Date.h"
#ifndef CONNGUOI_H
#define CONNGUOI_H
#include <string>
using namespace std;

class connguoi
{
private:
    string hoten;
    Date ngaySinh;
    string queQuan;

public:
    connguoi();
    connguoi(string ht, string ns, string qq);

    void setHoten(string ht);
    void setNgaySinh(string ns);
    void setQueQuan(string qq);

    string getHoten() const;
    string getNgaySinh() const;
    string getQueQuan() const;

    void in();
};

#endif // CONNGUOI_H
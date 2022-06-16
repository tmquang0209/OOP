#ifndef THOIGIAN_H
#define THOIGIAN_H
#include <iostream>
using namespace std;
class ThoiGian
{
private:
    int gio;
    int phut;
    int giay;
    static int count;

public:
    ThoiGian();
    ThoiGian(int, int, int);
    void print();
    static void printCount();
    ThoiGian operator+(const ThoiGian);
};
#endif
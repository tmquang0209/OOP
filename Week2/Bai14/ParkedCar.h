/*
!Nhiệm vụ:
 - Lưu giữ thông tin:
    + hãng xe
    + model
    + màu sắc
    + mã số giấy phép
    + thời gian xe đã đỗ tính bằng đơn vị phút
*/
#include "string"
using namespace std;
#ifndef PARKEDCAR_H
#define PARKEDCAR_H
class ParkedCar
{
private:
    string brand;
    string model;
    string color;
    string licensePlate;
    int minutes;

public:
    ParkedCar();
    ParkedCar(string, string, string, string, int);
    void setBrand(string);
    void setModel(string);
    void setColor(string);
    void setLicensePlate(string);
    void setMinutes(int);
    string getBrand();
    string getModel();
    string getColor();
    string getLicensePlate();
    int getMinutes();
};
#endif
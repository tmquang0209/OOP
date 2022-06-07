/*
! Nhiệm vụ:
 - Để biết số dặm hiện tại của ô tô.
 - Để báo cáo số dặm hiện tại của ô tô.
 - Có khả năng tăng số dặm hiện tại lên 1 dặm. Giá trị số dặm có khả năng
hiển thị trên đồng hồ tối đa là 999,999 dặm. Khi đạt được số dặm ở mức
tối đa này, đồng hồ sẽ chuyển về hiện thị số dặm bằng 0.
 - Có khả năng tương tác với đối tượng FuelGauge. Nó sẽ làm giảm số
nhiên liệu hiện tại của đối tượng FuelGauge đi 1 gallon mỗi khi xe đi
được 24 dặm. (Xe ô tô đi 24 dặm sẽ tiêu tốn 1 gallon).
*/
#include "FuelGauge.h"
#ifndef ODOMETER_H
#define ODOMETER_H
class Odometer
{
private:
    int odometer;
    FuelGauge fuelGauge;

public:
    Odometer();
    Odometer(int, int);
    void setOdometer(int);
    void setFuelGauge(int);
    void refuel();
    int getOdometer();
    int getFuelGauge();
    Odometer operator++();
    Odometer operator++(int);
};
#endif
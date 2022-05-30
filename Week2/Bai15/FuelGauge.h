/*
! Nhiệm vụ:
- Lượng nhiên liệu còn lại của xe được đo bằng gallon
- Báo cáo lượng nhiên liệu còn lại của xe được đo bằng đơn vị gallon
- Có khả năng tăng lượng nhiên liệu hiện tại lên 1 gallon. Điều này mô
phỏng việc đổ nhiên liệu vào cho xe ô tô. (Với khả năng chứa tối đa của
xe ô tô là 15 gallon.)
- Có khả năng giảm lượng nhiên liệu hiện tại đi 1 gallon, nếu lượng nhiên
liệu còn lại trong xe lớn hơn 0 gallon. Điều này mô phỏng việc đốt cháy
nhiên liệu khi xe ô tô chạy.
*/

#ifndef FUELGAUGE_H
#define FUELGAUGE_H
class FuelGauge
{
private:
    int fuel;

public:
    FuelGauge();
    FuelGauge(int fuel);
    void setFuel(int fuel);
    int getFuel();
    FuelGauge operator++();
    FuelGauge operator++(int);
    FuelGauge operator--();
    FuelGauge operator--(int);
};
#endif
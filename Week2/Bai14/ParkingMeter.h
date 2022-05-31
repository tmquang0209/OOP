/*
!Nhiệm vụ:
- Lưu giữ thông tin thời gian đỗ xe đã được chủ xe mua
*/
#ifndef PARKINGMETER_H
#define PARKINGMETER_H
class ParkingMeter
{
private:
    int minutes;

public:
    ParkingMeter();
    ParkingMeter(int);
    void setMinutes(int);
    int getMinutes();
};
#endif
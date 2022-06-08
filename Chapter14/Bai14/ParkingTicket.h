/*
!Nhiệm vụ:
Để báo cáo các thông tin hãng xe, model, màu sắc, và mã số giấy phép
của chiếc xe đã đỗ trái phép.
Để báo cáo số tiền phạt, với 25 đô la cho giờ đầu tiên (hoặc dưới một
giờ đầu tiên) của chiếc xe đã đỗ trái phép, cộng thêm 10 đô la cho mỗi
giờ tiếp theo (hoặc dưới 1 giờ tiếp theo) của chiếc xe đã đỗ trái phép.
Để báo cáo tên và số hiệu của cảnh sát xuất vé.
*/
#include "string"
using namespace std;
#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
class ParkingTicket
{
private:
    string brand;
    string model;
    string color;
    string licensePlate;
    int minutes;
    string officerName;
    int officerNumber;
    int fine; // tien phat

public:
    ParkingTicket();
    ParkingTicket(string, string, string, string, int, string, int);

    void setBrand(string);
    void setModel(string);
    void setColor(string);
    void setLicensePlate(string);
    void setMinutes(int);
    void setOfficerName(string);
    void setOfficerNumber(int);
    void setFine();

    string getBrand();
    string getModel();
    string getColor();
    string getLicensePlate();
    int getMinutes();
    string getOfficerName();
    int getOfficerNumber();
    int getFine();
};
#endif
/*Cho lớp trừu tượng PhepBienDoi, gồm các thành viên sau:
•	Hàm ảo thuần tuý bienDoi nhận một biến tham chiếu Point và biến đổi biến Point đó.
•	Hàm bienDoiMang nhận vào một mảng Point và kích thước mảng, sau đó gọi hàm bienDoi với từng phần tử mảng, cuối cùng in ra toạ độ từng phần tử mảng.
*/
#ifndef PHEPBIENDOI_H
#define PHEPBIENDOI_H
#include "Point.h"
class PhepBienDoi
{

public:
    PhepBienDoi();
    virtual void bienDoi(Point &) = 0;
    virtual void bienDoiMang(Point *, int);
};
#endif
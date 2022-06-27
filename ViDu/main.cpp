#include <iostream>
#include <string>
#include "Date.h"
#include "Date.cpp"

using namespace std;
// Tra ve tong so ngay
int TongNgay(int songay, int sotuan)
{
    if (songay < 0 || songay > 7)
    {
        string Loi;
        Loi = "So ngay vuot qua trong tuan! ";
        throw Loi;
    }
    else
        return 7 * sotuan + songay;
}
int main()
{
    // try
    // {
    //     int tong = TongNgay(200, 2);
    //     cout << "Tong ngay: " << tong << endl;
    // }
    // catch (string msg) // Bat tat ca nhung gi nem ra 1 xau ki tu
    // {
    //     cout << "Loi: " << msg << endl;
    // }

    // try
    // {
    //     Date d1(0, 0, 0);
    // }
    // catch (Date::ErrorDate)
    // {
    //     cout << "Error: Date! ";
    // }

    return 0;
}

#include <iostream>
#include "SinhVien.h"
#include "SinhVien.cpp"
#include "Date.h"

using namespace std;

int main()
{
    Date date(30, 12, 2000), date1;
    date1 = date + 720;
    date1.print();
    SinhVien sv("123", "Nguyen Van A", date);
    sv.print();
    SinhVien::getCount();
    return 0;
}
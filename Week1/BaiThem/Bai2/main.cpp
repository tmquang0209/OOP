/*
1. Cấu tử: Là phương thức có cùng tên với tên lớp.
  + là phương thức được gọi ngay khi đối tượng được tạo ra
  + dùng để khởi tạo giá trị
  + Phương thức không có kiểu trả về
2. Hủy tử: Là phương thức có cùng tên với tên lớp và có dấu ~ ở trước
  + được gọi trước khi đối tượng được hủy bỏ
  + Phương thức không có tham số
3. Quá tải là các đặt tên hàm, tên phương thức giống nhau nhưng khác nhau về tham số truyền vào
  + Quá tải hàm
  + Quá tải phương thức: +, -, ++, --,...
*/
#include <iostream>
#include "phanso.h"
#include "phanso.cpp"

using namespace std;
int main()
{
  Phanso p1(1, 2), p2(3, 4), p3;
  cin >> p3;
  cout << p3;
  // if (p1 > p2)
  //   cout << "p1 > p2" << endl;

  // if (p1 < p2)
  //   cout << "p1 < p2" << endl;

  // if (p1 == p2)
  //   cout << "p1 = p2" << endl;

  // if(p1 <= p2)
  //   cout << "p1 <= p2" <<endl;

  // if(p1 >= p2)
  //   cout << "p1 >= p2" << endl;
  // p3 = p1 / p2;
  // p3++;
  // p3.Print();
}
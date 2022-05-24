// Xây dựng lớp phân số
#ifndef PHANSO_H
#define PHANSO_H
class Phanso
{
private:
  int tu;
  int mau;

public:
  Phanso();             // Khởi tạo giá trị mặc định
  Phanso(int t);        // Khởi tạo tu=t và mau = 1
  Phanso(int t, int m); // Khởi tạo tu=t, mau=m
  ~Phanso();
  void Print();             // In ra phân số
  void setTu(int t);        // Gán giá trị cho tử
  void setTu(int t, int m); // Gán giá trị cho tử và cả mẫu.
  // void setTu(int t1,int m1);
  void setTu(float t, float m);
  void setMau(int m); // Gán giá trị cho mẫu
  int getTu();        // Lấy giá trị của tử
  int getMau();       // Lấy giá trị của mẫu
  Phanso operator+(Phanso p);
  Phanso operator-(Phanso p);
  Phanso operator*(Phanso p);
  Phanso operator/(Phanso p);
  Phanso operator++(int);
  Phanso operator--(int);
};
#endif
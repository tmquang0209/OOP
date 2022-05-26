// Xây dựng lớp phân số
using namespace std;
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
  void setTu(float t, float m);
  void setMau(int m); // Gán giá trị cho mẫu
  int getTu();        // Lấy giá trị của tử
  int getMau();       // Lấy giá trị của mẫu
  void GCD();
  Phanso operator+(Phanso p);
  Phanso operator-(Phanso p);
  Phanso operator*(Phanso p);
  Phanso operator/(Phanso p);
  Phanso operator++(int);
  Phanso operator--(int);
  bool operator>(const Phanso &p);
  bool operator<(const Phanso &p);
  bool operator==(const Phanso &p);
  bool operator>=(const Phanso &p);
  bool operator<=(const Phanso &p);
  friend istream &operator>>(istream &is, Phanso &p);
  friend ostream &operator<<(ostream &os, Phanso &p);
};
#endif
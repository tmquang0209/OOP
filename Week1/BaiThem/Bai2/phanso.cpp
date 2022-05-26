
#include <iostream>
#include "phanso.h"
using namespace std;
Phanso::Phanso()
{
  tu = 1;
  mau = 1;
}
Phanso::Phanso(int t)
{
  tu = t;
  mau = 1;
}
Phanso::Phanso(int t, int m)
{
  tu = t;
  mau = m;
}
Phanso::~Phanso()
{
  // cout<<"Good bye!";
}
void Phanso::Print()
{
  cout << tu << "/" << mau;
};
void Phanso::setTu(int t)
{
  tu = t;
};
void Phanso::setTu(int t, int m)
{
  tu = t;
  mau = m;
};
void Phanso::setTu(float t, float m)
{
  tu = t;
  mau = m;
};
void Phanso::setMau(int m)
{
  mau = m;
};
int Phanso::getTu()
{
  return tu;
}
int Phanso::getMau()
{
  return mau;
}

void Phanso::GCD()
{
  int a = tu;
  int b = mau;
  while (a != b)
  {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  tu = tu / a;
  mau = mau / a;
}

Phanso Phanso::operator+(Phanso p)
{
  Phanso temp;
  temp.tu = tu * p.mau + p.tu * mau;
  temp.mau = mau * p.mau;
  return temp;
}

Phanso Phanso::operator-(Phanso p)
{
  Phanso temp;
  temp.tu = tu * p.mau - p.tu * mau;
  temp.mau = mau * p.mau;
  return temp;
}

Phanso Phanso::operator*(Phanso p)
{
  Phanso temp;
  temp.tu = tu * p.tu;
  temp.mau = mau * p.mau;
  return temp;
}

Phanso Phanso::operator/(Phanso p)
{
  Phanso temp;
  temp.tu = tu * p.mau;
  temp.mau = mau * p.tu;
  return temp;
}

Phanso Phanso::operator++(int)
{
  Phanso temp;
  temp.tu = tu;
  temp.mau = mau;
  tu += mau;
  GCD();
  return temp;
}

Phanso Phanso::operator--(int)
{
  Phanso temp;
  temp.tu = tu;
  temp.mau = mau;
  tu -= mau;
  GCD();
  return temp;
}

bool Phanso::operator>(const Phanso &p)
{
  if ((double)tu / mau > (double)p.tu / p.mau)
    return true;
  return false;
}
bool Phanso::operator<(const Phanso &p)
{
  if ((double)tu / mau < (double)p.tu / p.mau)
    return true;
  return false;
}
bool Phanso::operator==(const Phanso &p)
{
  if ((double)tu / mau == (double)p.tu / p.mau)
    return true;
  return false;
}
bool Phanso::operator>=(const Phanso &p)
{
  if ((double)tu / mau >= (double)p.tu / p.mau)
    return true;
  return false;
}
bool Phanso::operator<=(const Phanso &p)
{
  if ((double)tu / mau <= (double)p.tu / p.mau)
    return true;
  return false;
}

istream &operator>>(istream &is, Phanso &p)
{
  cout << "Tu: ";
  is >> p.tu;
  cout << "Mau: ";
  is >> p.mau;
  return is;
}

ostream &operator<<(ostream &os, Phanso &p)
{
  return os << p.tu << "/" << p.mau << endl;
}

// void operator>>(istream &is, Phanso &p)
// {
//   cout << "Tu: ";
//   is >> p.tu;
//   cout << "Mau: ";
//   is >> p.mau;
// }

// void operator<<(ostream &os, Phanso p)
// {
//   os << p.tu << "/" << p.mau << endl;
// }
#ifndef PHANSO_H
#define PHANSO_H
class PhanSo
{
private:
    int tuSo;
    int mauSo;

public:
    PhanSo();
    PhanSo(int, int);
    PhanSo operator+(PhanSo &);
    PhanSo operator-(PhanSo &);
    void print();
    static PhanSo Min(PhanSo &, PhanSo &);
};
#endif
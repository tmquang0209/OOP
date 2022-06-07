#ifndef CONNGUOI_H
#define CONNGUOI_H
#include <string>

using namespace std;

class connguoi
{
private:
    string hoten;
    int tuoi;

public:
    connguoi();
    connguoi(string ht, int t);

    void setHoten(string ht);
    void setTuoi(int t);
    string getHoten() const;
    int getTuoi() const;
    void in();
};

#endif // CONNGUOI_H
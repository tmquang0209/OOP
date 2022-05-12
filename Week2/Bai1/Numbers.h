#ifndef NUMBERS_H
#define NUMBERS_H
class Numbers
{
private:
    int number;

public:
    Numbers();
    Numbers(int);
    void setNumber(int);
    int getNumber() const;
    void print();
    ~Numbers();
};
#endif
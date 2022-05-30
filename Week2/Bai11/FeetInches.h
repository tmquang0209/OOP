#ifndef FEETINCHES_H
#define FEETINCHES_H

using namespace std;

class FeetInches
{
private:
    int feet;
    int inches;

public:
    FeetInches();
    FeetInches(int, int);
    FeetInches(const FeetInches &);
    void setFeet(int feet);
    int getFeet() const;
    void setInches(int inches);
    int getInches() const;
    void convert();
    FeetInches operator+(const FeetInches &);
    FeetInches operator-(const FeetInches &);
    bool operator!=(const FeetInches &);
    bool operator>=(const FeetInches &);
    bool operator<=(const FeetInches &);
    friend ostream &operator<<(ostream &, const FeetInches &);
    friend istream &operator>>(istream &, FeetInches &);
};

#endif
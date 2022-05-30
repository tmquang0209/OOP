#include "FeetInches.h"
#include <cstdlib>

FeetInches::FeetInches()
{
    feet = 0;
    inches = 0;
}

FeetInches::FeetInches(int feet, int inches)
{
    this->feet = feet;
    this->inches = inches;
}

FeetInches::FeetInches(const FeetInches &obj)
{
    feet = obj.feet;
    inches = obj.inches;
}

void FeetInches::setFeet(int feet)
{
    this->feet = feet;
}
int FeetInches::getFeet() const
{
    return feet;
}
void FeetInches::setInches(int inches)
{
    this->inches = inches;
}
int FeetInches::getInches() const
{
    return inches;
}

void FeetInches::convert()
{
    if (inches > 12)
    {
        feet += (inches / 12);
        inches = inches % 12;
    }
    if (inches < 0)
    {
        feet -= ((abs(inches) / 12) + 1);
        inches = 12 - (abs(inches)) % 12;
    }
}

FeetInches FeetInches::operator+(const FeetInches &right)
{
    FeetInches temp;
    temp.feet = feet + right.feet;
    temp.inches = inches + right.inches;
    temp.convert();
    return temp;
}

FeetInches FeetInches::operator-(const FeetInches &right)
{
    FeetInches temp;
    temp.feet = feet - right.feet;
    temp.inches = inches - right.inches;
    temp.convert();
    return temp;
}

bool FeetInches::operator!=(const FeetInches &right)
{
    if (feet != right.feet)
    {
        return true;
    }
    else
    {
        if (inches != right.inches)
        {
            return true;
        }
        else
        {
            return false;
        }
        return false;
    }
}

bool FeetInches::operator<=(const FeetInches &right)
{
    if (feet < right.feet || (feet = right.feet && inches <= right.inches))
    {
        return true;
    }

    return false;
}

bool FeetInches::operator>=(const FeetInches &right)
{
    if (feet >= right.feet)
    {
        if (inches >= right.inches)
        {
            return true;
        }
    }
    return false;
}

ostream &operator<<(ostream &os, const FeetInches &obj)
{
    os << obj.inches << " feet " << obj.feet << " inches";
    return os;
}

istream &operator>>(istream &is, FeetInches &obj)
{
    is >> obj.inches >> obj.feet;
    obj.convert();
    return is;
}
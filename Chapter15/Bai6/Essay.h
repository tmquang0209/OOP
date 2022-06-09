#ifndef ESSAY_H
#define ESSAY_H
#include <iostream>
#include "GradedActivity.h"
using namespace std;
class Essay : public GradedActivity
{
private:
    double grammar;
    double spelling;
    double length;
    double content;

public:
    Essay();
    Essay(double, double, double, double);
    void setGrammar(double);
    void setSpelling(double);
    void setLength(double);
    void setContent(double);
    double getGrammar() const;
    double getSpelling() const;
    double getLength() const;
    double getContent() const;
    double getTotal() const;
    char getGrade() const;
    friend istream &operator>>(istream &, Essay &);
    friend ostream &operator<<(ostream &, Essay &);
};
#endif
#ifndef BACSICSHAPE_H
#define BACSICSHAPE_H
class BasicShape
{
protected:
    double area;

public:
    BasicShape();
    BasicShape(double);
    double getArea() const;
    virtual void calcArea() = 0;
    virtual void print() = 0;
};
#endif
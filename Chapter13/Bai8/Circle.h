#ifndef CIRCLE_H
#define CIRCLE_H
class Circle
{
private:
    double radius;

public:
    Circle();
    Circle(double);
    void setRadius(double);
    double getRadius() const;
    double getArea() const;
    double getCircumference() const;
};
#endif
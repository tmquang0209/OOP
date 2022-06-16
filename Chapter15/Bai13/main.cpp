#include <iostream>
#include "Rectangle.h"
#include "Rectangle.cpp"
#include "Circle.h"
#include "Circle.cpp"
#include "BasicShape.h"
#include "BasicShape.cpp"

using namespace std;

const int SIZE = 2;

int main()
{
    BasicShape *shape[SIZE] = {new Circle(1, 2, 3),
                               new Rectangle(4, 5)};

    for (int i = 0; i < SIZE; i++)
    {
        shape[i]->print();
        cout << endl;
    }
    return 0;
}
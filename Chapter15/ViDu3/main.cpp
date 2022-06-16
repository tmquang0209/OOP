#include <iostream>
#include <string>
#include "Forum.h"
#include "Forum.cpp"
#include "ForumTinhTe.h"
#include "ForumTinhTe.cpp"
#include "ForumVnZoom.h"
#include "ForumVnZoom.cpp"

using namespace std;

const int SIZE = 3;

int main()
{
    Forum *forum[SIZE] = {new ForumTinhTe("Quang 1", 2018, 2022),
                          new ForumVnZoom("Quang 2", 200),
                          new ForumTinhTe("Quang 3", 2021, 2022)};

    for (int i = 0; i < SIZE; i++)
    {
        forum[i]->print();
        cout << endl;
    }
}
#include <iostream>
#include <string>
#include "Pet.h"
#include "Pet.cpp"
#include "Cat.h"
#include "Cat.cpp"
#include "Fish.h"
#include "Fish.cpp"
using namespace std;

const int SIZE = 2;

int main()
{
    int choice;
    Pet *pet[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "=== Menu ===" << endl;
        cout << "1. Cat" << endl;
        cout << "2. Fish" << endl;
        do
        {
            cout << "Your choice: ";
            cin >> choice;
            if (choice < 0 || choice > 2)
                cout << "Invalid choice!" << endl;
        } while (choice < 0 || choice > SIZE);
        if (choice == 1)
        {
            pet[i] = new Cat();
            pet[i]->input();
        }
        else
        {
            pet[i] = new Fish();
            pet[i]->input();
        }
    }

    cout << "=== Display ===" << endl;
    for (int i = 0; i < 2; i++)
    {
        pet[i]->display();
    }
}
#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

Pet::Pet()
{
    name = "";
    habitat = "";
}

Pet::Pet(string name, string habitat)
{
    this->name = name;
    this->habitat = habitat;
}

void Pet::setInfor(string name, string habitat)
{
    this->name = name;
    this->habitat = habitat;
}

string Pet::getName()
{
    return name;
}

string Pet::getHabitat()
{
    return habitat;
}

void Pet::input()
{
    int choice;
    cout << "Name: ";
    cin >> name;
    cout << "Habitat: ";
    do
    {
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ". " << type[i] << "\t";
        }
        cout << endl;
        cout << "Your choice: ";
        cin >> choice;
    } while (choice < 0 || choice > 3);
    habitat = type[choice - 1];
}

void Pet::display()
{
    cout << "Name: " << name << endl;
    cout << "Habitat: " << habitat << endl;
}
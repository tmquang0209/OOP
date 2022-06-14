#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;

Cat::Cat() : Pet()
{
    featherLength = "";
}

Cat::Cat(string name, string habitat, string featherLength)
{
    if (habitat == "Water")
        Pet::setInfor(name, "");
    else
        Pet::setInfor(name, habitat);
    this->featherLength = featherLength;
}

void Cat::setInfor(string name, string habitat, string featherLength)
{
    if (habitat == "Water")
        Pet::setInfor(name, "");
    else
        Pet::setInfor(name, habitat);
    this->featherLength = featherLength;
}

void Cat::input()
{

    string length[3] = {"Short", "Long", "Medium"};
    int choice;
    string name, habitat;

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
    } while (choice < 1 || choice > 3);
    if (choice == 1)
        habitat = "";
    else
        habitat = type[choice - 1];
    Pet::setInfor(name, habitat);

    choice = 0;
    cout << "Feather length: ";
    do
    {
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ". " << length[i] << "\t";
        }
        cout << endl;
        cout << "Your choice: ";
        cin >> choice;
    } while (choice < 0 || choice > 3);
    featherLength = length[choice - 1];
}

void Cat::display()
{
    cout << "Name: " << getName() << "\tHabitat:" << getHabitat() << "\tFeather length: " << featherLength << endl;
}
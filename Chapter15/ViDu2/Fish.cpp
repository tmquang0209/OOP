#include <iostream>
#include <string>
#include "Pet.h"
#include "Fish.h"

using namespace std;

Fish::Fish() : Pet()
{
    typeOfFish = "";
}

Fish::Fish(string name, string habitat, string typeOfFish) : Pet(name, habitat)
{
    if (habitat == "Forest")
        Pet::setInfor(name, "");
    else
        Pet::setInfor(name, habitat);
    this->typeOfFish = typeOfFish;
}

void Fish::setInfor(string name, string habitat, string typeOfFish)
{
    if (habitat == "Forest")
        Pet::setInfor(name, "");
    else
        Pet::setInfor(name, habitat);
    this->typeOfFish = typeOfFish;
}

void Fish::input()
{
    int choice;
    string typeFish[2] = {"Freshwater", "Saltwater"};
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
    if (choice == 3)
        habitat = "";
    else
        habitat = type[choice - 1];
    Pet::setInfor(name, habitat);

    choice = 0;
    cout << "Type of fish: ";
    do
    {
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << ". " << typeFish[i] << "\t";
        }
        cout << endl;
        cout << "Your choice: ";
        cin >> choice;
    } while (choice < 0 || choice > 2);
    typeOfFish = typeFish[choice - 1];
}

void Fish::display()
{
    cout << "Name: " << getName() << "\tHabitat:" << getHabitat() << "\tType of fish: " << typeOfFish << endl;
}
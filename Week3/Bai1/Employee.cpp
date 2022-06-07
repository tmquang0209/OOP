#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee()
{
    name = "";
    id = 0;
    date = "";
}

Employee::Employee(string name, int id, string date)
{
    this->name = name;
    this->id = id;
    this->date = date;
}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::setDate(string date)
{
    this->date = date;
}

void Employee::setId(int id)
{
    this->id = id;
}

string Employee::getName() const
{
    return name;
}

int Employee::getId() const
{
    return id;
}

string Employee::getDate() const
{
    return date;
}

void Employee::print()
{
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Rental start date: " << date << endl;
}
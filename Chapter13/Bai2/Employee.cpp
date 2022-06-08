#include <iostream>
#include "Employee.h"
#include <string.h>

using namespace std;

Employee::Employee()
{
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}

Employee::Employee(string names, int idNumbers, string departments, string positions)
{
    name = names;
    idNumber = idNumbers;
    department = departments;
    position = positions;
}

Employee::Employee(string names, int idNumbers)
{
    name = names;
    idNumber = idNumbers;
    department = "";
    position = "";
}

void Employee::setName(string names)
{
    name = names;
}

void Employee::setIdNumber(int idNumbers)
{
    idNumbers = idNumbers;
}

void Employee::setDepartment(string departments)
{
    department = departments;
}

void Employee::setPosition(string positions)
{
    position = positions;
}

string Employee::getName() const
{
    return name;
}

int Employee::getIdNumber() const
{
    return idNumber;
}

string Employee::getDepartment() const
{
    return department;
}

string Employee::getPosition() const
{
    return position;
}

void Employee::output()
{
    cout << name << "\t" << idNumber << "\t\t" << department << "\t\t" << position << "\n";
}

Employee::~Employee()
{
    cout << "Huy tu" << endl;
}

int main()
{
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout << "Name \t\t ID Number \t Department \t Position" << endl;
    employee1.output();
    employee2.output();
    employee3.output();
    return 0;
}

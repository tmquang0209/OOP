#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    Employee();
    Employee(string names, int idNumbers, string departments, string positions);
    Employee(string names, int idNumbers);
    void setName(string names);
    void setIdNumber(int idNumbers);
    void setDepartment(string departments);
    void setPosition(string positions);
    string getName() const;
    int getIdNumber() const;
    string getDepartment() const;
    string getPosition() const;
    void output();
    ~Employee();
};

#endif
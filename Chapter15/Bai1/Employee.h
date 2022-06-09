#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Date.h"
using namespace std;
class Employee
{
private:
    string name;
    int id;
    Date date;

public:
    Employee();
    Employee(string name, int id, Date date);
    void setName(string name);
    void setId(int id);
    void setDate(Date date);
    string getName() const;
    int getId() const;
    Date getDate() const;
    void print();
};
#endif
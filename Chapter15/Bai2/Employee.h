#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    int id;
    string date;

public:
    Employee();
    Employee(string name, int id, string date);
    void setName(string name);
    void setId(int id);
    void setDate(string date);
    string getName() const;
    int getId() const;
    string getDate() const;
    void print();
};
#endif
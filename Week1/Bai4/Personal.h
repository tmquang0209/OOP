#include <string>
using namespace std;

#ifndef PERSONAL_H
#define PERSONAL_H
class Personal
{
private:
    string name, adress, phone;
    int age;

public:
    void setName(string names);
    void setAdress(string adresss);
    void setPhone(string phones);
    void setAge(int ages);
    string getName() const;
    string getAdress() const;
    string getPhone() const;
    int getAge() const;
    void output();
    ~Personal();
};
#endif
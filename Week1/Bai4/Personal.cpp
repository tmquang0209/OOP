#include <iostream>
#include <string>
#include "Personal.h"

using namespace std;

void Personal::setName(string names)
{
    name = names;
}

void Personal::setAdress(string adresss)
{
    adress = adresss;
}

void Personal::setPhone(string phones)
{
    phone = phones;
}

void Personal::setAge(int ages)
{
    age = ages;
}

string Personal::getName() const
{
    return name;
}

string Personal::getAdress() const
{
    return adress;
}

string Personal::getPhone() const
{
    return phone;
}

int Personal::getAge() const
{
    return age;
}

void Personal::output()
{
    cout << name << "\t" << adress << "\t" << phone << "\t" << age << endl;
}

Personal::~Personal()
{
    cout << "Destructor" << endl;
}

int main()
{
    Personal person1, person2, person3;

    person1.setName("Tran Minh Quang");
    person1.setAdress("Vinh Phuc");
    person1.setPhone("0397847805");
    person1.setAge(19);
    person1.output();

    person2.setName("Nguyen Van A");
    person2.setAdress("Ha Noi");
    person2.setPhone("01234567890");
    person2.setAge(20);
    person2.output();

    person3.setName("Nguyen Van B");
    person3.setAdress("Da Nang");
    person3.setPhone("0987654321");
    person3.setAge(21);
    person3.output();
}
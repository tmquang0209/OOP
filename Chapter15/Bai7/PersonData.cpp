#include <iostream>
#include <string>
#include "PersonData.h"
using namespace std;

PersonData::PersonData()
{
    firstName = "";
    lastName = "";
    address = "";
    city = "";
    province = "";
    ZIPCode = 0;
    numberPhone = "";
}

PersonData::PersonData(string first, string last,
                       string add, string city,
                       string province, int zip,
                       string phone)
{
    setData(first, last, add, city, province, zip, phone);
}

void PersonData::setData(string first, string last,
                         string add, string city,
                         string province, int zip,
                         string phone)
{
    firstName = first;
    lastName = last;
    address = add;
    this->city = city;
    this->province = province;
    ZIPCode = zip;
    numberPhone = phone;
}

string PersonData::getFirstName()
{
    return firstName;
}

string PersonData::getLastName()
{
    return lastName;
}

string PersonData::getAddress()
{
    return address;
}

string PersonData::getCity()
{
    return city;
}

string PersonData::getProvince()
{
    return province;
}

int PersonData::getZIPCode()
{
    return ZIPCode;
}

string PersonData::getNumberPhone()
{
    return numberPhone;
}

void PersonData::displayPerson()
{
    cout << "First name: \t\t" << firstName << endl;
    cout << "Last name: \t\t" << lastName << endl;
    cout << "Address: \t\t" << address << endl;
    cout << "City: \t\t\t" << city << endl;
    cout << "Province: \t\t" << province << endl;
    cout << "ZIP code: \t\t" << ZIPCode << endl;
    cout << "Phone number: \t\t" << numberPhone << endl;
}
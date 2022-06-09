#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;
class PersonData
{
    /*
+ firstName : string
+ lastName : string
+ address : string
+ city : string
+ province : string
+ ZIPCode : int
+ numberPhone : string
    */
    string firstName;
    string lastName;
    string address;
    string city;
    string province;
    int ZIPCode;
    string numberPhone;

public:
    PersonData();
    PersonData(string, string, string, string, string, int, string);
    void setData(string, string, string, string, string, int, string);
    string getFirstName();
    string getLastName();
    string getAddress();
    string getCity();
    string getProvince();
    int getZIPCode();
    string getNumberPhone();
    void displayPerson();
};
#endif
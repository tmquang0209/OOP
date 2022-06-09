#include <iostream>
#include <string>
#include "PersonData.h"
#include "CustomerData.h"

using namespace std;

CustomerData::CustomerData() : PersonData()
{
    customerNumber = "";
    mailingList = false;
}

CustomerData::CustomerData(string firstName, string lastName,
                           string address, string city,
                           string province, int ZIPCode,
                           string numberPhone, string customerNumber,
                           bool mailingList)
    : PersonData(firstName, lastName,
                 address, city, province,
                 ZIPCode, numberPhone)
{
    this->customerNumber = customerNumber;
    this->mailingList = mailingList;
}

string CustomerData::getCustomerNumber()
{
    return customerNumber;
}

bool CustomerData::getMailingList()
{
    return mailingList;
}

void CustomerData::displayCustomer()
{
    displayPerson();
    cout << "Customer Number: \t" << customerNumber << endl;
    cout << "Mailing List: \t\t" << mailingList << endl;
}
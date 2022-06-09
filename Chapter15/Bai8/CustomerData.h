#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include <string>
#include "PersonData.h"
using namespace std;
class CustomerData : public PersonData
{
private:
    // + customerNumber : string
    // + mailingList : bool
    // (true neu co trong dsach)
    string customerNumber;
    bool mailingList;

public:
    CustomerData();
    CustomerData(string, string, string, string, string, int, string, string, bool);
    string getCustomerNumber();
    bool getMailingList();
    void displayCustomer();
};
#endif
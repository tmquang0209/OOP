#include <string>
using namespace std;
#ifndef DATE_H
#define DATE_H
class Date
{
private:
    string date;

public:
    Date();
    Date(string d);
    void setDate(string d);
    string getDate() const;
};
#endif
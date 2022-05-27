#include <iostream>
#include "TimeOff.h"
#include "NumDays.h"

using namespace std;

const int MAX_PAID = 240;
// constructor
TimeOff::TimeOff()
{
    id = 0;
    name = "";
    maxSickDays = 0;
    sickTaken = 0;
    maxVacation = 0;
    vacTaken = 0;
    maxUnpaid = 0;
    unpaidTaken = 0;
}
TimeOff::TimeOff(int id, string name, double maxSickDays, double sickTaken, double maxVacation, double vacTaken, double maxUnpaid, double unpaidTaken)
{
    this->id = id;
    this->name = name;
    this->maxSickDays = maxSickDays;
    this->sickTaken = sickTaken;
    this->maxVacation = (maxVacation < MAX_PAID) ? maxVacation : MAX_PAID;
    this->vacTaken = vacTaken;
    this->maxUnpaid = maxUnpaid;
    this->unpaidTaken = unpaidTaken;
}
// setter
void TimeOff::setID(int id)
{
    this->id = id;
}

void TimeOff::setName(string name)
{
    this->name = name;
}

void TimeOff::setMaxSickDays(double maxSickDays)
{
    this->maxSickDays.setHours(maxSickDays);
}

void TimeOff::setSickTaken(double sickTaken)
{
    this->sickTaken.setHours(sickTaken);
}

void TimeOff::setMaxVacation(double maxVacation)
{

    this->maxVacation.setHours((maxVacation < MAX_PAID) ? maxVacation : MAX_PAID);
}

void TimeOff::setVacTaken(double vacTaken)
{
    this->vacTaken.setHours(vacTaken);
}

void TimeOff::setMaxUnpaid(double maxUnpaid)
{
    this->maxUnpaid.setHours(maxUnpaid);
}

void TimeOff::setUnpaidTaken(double unpaidTaken)
{
    this->unpaidTaken.setHours(unpaidTaken);
}

// getter
int TimeOff::getID() const
{
    return this->id;
}
string TimeOff::getName() const
{
    return this->name;
}
double TimeOff::getMaxSickDays()
{
    return maxSickDays.getDays();
}
double TimeOff::getSickTaken()
{
    return this->sickTaken.getDays();
}
double TimeOff::getMaxVacation()
{
    return this->maxVacation.getDays();
}
double TimeOff::getVacTaken()
{
    return this->vacTaken.getDays();
}
double TimeOff::getMaxUnpaid()
{
    return this->maxUnpaid.getDays();
}
double TimeOff::getUnpaidTaken()
{
    return this->unpaidTaken.getDays();
}

istream &operator>>(istream &is, TimeOff &timeOff)
{
    int id;
    string name;
    double maxSickDays, sickTaken, maxVacation, vacTaken, maxUnpaid, unpaidTaken;
    cout << "ID number: ";
    is >> id;
    cout << "Name: ";
    is >> name;
    cout << "Maximum sick days: ";
    is >> maxSickDays;
    cout << "Sick days taken: ";
    is >> sickTaken;
    cout << "Maximum vacation days: ";
    is >> maxVacation;
    cout << "Vacation days taken: ";
    is >> vacTaken;
    cout << "Maximum unpaid days: ";
    is >> maxUnpaid;
    cout << "Unpaid days taken: ";
    is >> unpaidTaken;
    timeOff = TimeOff(id, name, maxSickDays, sickTaken, maxVacation, vacTaken, maxUnpaid, unpaidTaken);
    return is;
}

ostream &operator<<(ostream &, TimeOff &timeOff)
{
    cout << "===============" << endl;
    cout << "***" << endl;
    cout << "ID:\t" << timeOff.getID() << endl;
    cout << "Name:\t" << timeOff.getName() << endl;
    cout << "***" << endl;
    cout << "Max Sick Days:\t" << timeOff.getMaxSickDays() << endl;
    cout << "Sick Taken:\t" << timeOff.getSickTaken() << endl;
    cout << endl;
    cout << "Max Vacation:\t" << timeOff.getMaxVacation() << endl;
    cout << "Vacation Taken:\t" << timeOff.getVacTaken() << endl;
    cout << endl;
    cout << "Max Unpaid:\t" << timeOff.getMaxUnpaid() << endl;
    cout << "Unpaid Taken:\t" << timeOff.getUnpaidTaken() << endl;
    return cout;
}

#include <iostream>
#include <string>
#include "ProductionWorker.h"
#include "TeamLeader.h"
using namespace std;

TeamLeader::TeamLeader() : ProductionWorker()
{
    hoursRequired = 0;
    hoursAttended = 0;
    bonus = 0;
}

TeamLeader::TeamLeader(string name, int id, string date, int shift,
                       double hourlyPayRate, int workingDays,
                       double hoursRequired, double hoursAttended, double bonus)
    : ProductionWorker(name, id, date, shift, hourlyPayRate, workingDays)
{
    this->hoursRequired = hoursRequired;
    this->hoursAttended = hoursAttended;
    this->bonus = bonus;
}

void TeamLeader::setHoursRequired(double hoursRequired)
{
    this->hoursRequired = hoursRequired;
}

void TeamLeader::setHoursAttended(double hoursAttended)
{
    this->hoursAttended = hoursAttended;
}

void TeamLeader::setBonus(double bonus)
{
    this->bonus = bonus;
}

double TeamLeader::getHoursRequired() const
{
    return hoursRequired;
}

double TeamLeader::getHoursAttended() const
{
    return hoursAttended;
}

double TeamLeader::getBonus() const
{
    return bonus;
}

void TeamLeader::print()
{
    double bonusMoney = (hoursAttended - hoursRequired > 0)
                            ? (hoursAttended - hoursRequired) * bonus
                            : 0;
    ProductionWorker::print();
    cout << "==============" << endl;
    cout << "Hours training required: " << hoursRequired << endl;
    cout << "Hours training attended: " << hoursAttended << endl;
    cout << "Bonus: $" << bonusMoney << endl;
    cout << "Total salary: $"
         << ProductionWorker::getSalary() + bonusMoney << endl;
    cout << "==============" << endl;
}
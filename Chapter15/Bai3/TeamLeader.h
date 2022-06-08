#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include <string>
#include "ProductionWorker.h"
class TeamLeader : public ProductionWorker
{
private:
    double hoursRequired;
    double hoursAttended;
    double bonus; // so tien bonus / 1 gio

public:
    TeamLeader();
    TeamLeader(string name, int id, string date, int shift,
               double hourlyPayRate, int workingDays,
               double hoursRequired, double hoursAttended, double bonus);
    void setHoursRequired(double hoursRequired);
    void setHoursAttended(double hoursAttended);
    void setBonus(double bonus);
    double getHoursRequired() const;
    double getHoursAttended() const;
    double getBonus() const;
    void print();
};
#endif
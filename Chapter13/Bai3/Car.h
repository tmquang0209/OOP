#ifndef CAR_H
#define CAR_H
#include <string>

using namespace std;

class Car
{
private:
    int yearModel;
    string make;
    double speed;

public:
    Car(int yearModels, string makes);

    int getYearModel() const;
    void setYearModel(int yearModels);
    string getMake() const;
    void setMake(string makes);
    double getSpeed() const;
    void setSpeed(double speeds);
    void accelerate();
    void brake();
};
#endif
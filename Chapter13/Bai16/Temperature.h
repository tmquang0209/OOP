#ifndef TEMPERATURE_H
#define TEMPERATURE_H
class Temperature
{
private:
    double temperature;
public:
    Temperature();
    void setTemperature(double);
    double getTemperature() const;
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
    void display();
    ~Temperature();
};
#endif
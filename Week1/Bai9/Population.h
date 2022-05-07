#ifndef POPULATION_H
#define POPULATION_H
class Population
{
private:
    int population;
    int births;
    int deaths;

public:
    Population(int, int, int);
    void setPopulation(int);
    void setBirths(int);
    void setDeaths(int);
    int getPopulation() const;
    int getBirths() const;
    int getDeaths() const;
    double getBirthRate() const;
    double getDeathRate() const;
};
#endif
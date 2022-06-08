#include <iostream>
#include "Population.h"

using namespace std;

Population::Population(int population, int births, int deaths)
{
    this->population = population;
    this->births = births;
    this->deaths = deaths;
}

void Population::setPopulation(int population)
{
    this->population = population;
}

void Population::setBirths(int births)
{
    this->births = births;
}

void Population::setDeaths(int deaths)
{
    this->deaths = deaths;
}

int Population::getPopulation() const
{
    return population;
}

int Population::getBirths() const
{
    return births;
}

int Population::getDeaths() const
{
    return deaths;
}

double Population::getBirthRate() const
{
    return (double)births / population;
}

double Population::getDeathRate() const
{
    return (double)deaths / population;
}

int main()
{
    Population population(100000, 8000, 6000);
    cout << population.getBirthRate() << endl;
    cout << population.getDeathRate() << endl;
}
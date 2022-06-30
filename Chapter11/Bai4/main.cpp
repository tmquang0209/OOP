#include <bits/stdc++.h>
using namespace std;

struct Weather
{
    double totalRainfall, highTemp, lowTemp, avgTemp;
};

void print(Weather &weather);

int main()
{
    Weather wt[3] = {{120, 30, 20},
                     {100, 20, 10},
                     {80, 10, 0}};

    for (int i = 0; i < 3; i++)
    {
        wt[i].avgTemp = (wt[i].highTemp + wt[i].lowTemp) / 2;
    }
    for (int i = 0; i < 3; i++)
    {
        print(wt[i]);
        cout << endl;
    }
}

void print(Weather &weather)
{
    cout << "=====***=====" << endl;
    cout << "Total rainfall: " << weather.totalRainfall << endl;
    cout << "High temperature: " << weather.highTemp << endl;
    cout << "Low temperature: " << weather.lowTemp << endl;
    cout << "Average temperature: " << weather.avgTemp << endl;
    cout << "=====END=====" << endl;
}
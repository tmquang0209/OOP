#include <iostream>
#include "Time.h"
#include "MilTime.h"
#include "MilTime.cpp"

using namespace std;

int main()
{
    try
    {
        MilTime t1(10, 10, 50);
        cout << t1;
    }
    catch (MilTime::BadHour)
    {
        cout << "Error hour" << endl;
    }
    catch (MilTime::BadSecond)
    {
        cout << "Error second" << endl;
    }
    return 0;
}
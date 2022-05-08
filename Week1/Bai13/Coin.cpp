#include <iostream>
#include <string>
#include <random>
#include "Coin.h"

using namespace std;

const int TIMES = 20;

Coin::Coin()
{
    toss();
}

void Coin::toss()
{
    int random_number = rand() % 2;
    sideUp = (random_number == 0) ? "Heads" : "Tails";
}

string Coin::getSideUp()
{
    return sideUp;
}

int main()
{
    Coin coin = Coin();
    cout << "Mat dong xu hien tai: " << coin.getSideUp() << endl;
    srand(time(NULL));
    int count = 0;
    for (int i = 0; i < TIMES; i++)
    {
        coin.toss();
        cout << "Toss: " << coin.getSideUp() << endl;
        if (coin.getSideUp() == "Heads")
        {
            count++;
        }
    }
    cout << "So lan ngua: " << count << endl;
    cout << "So lan up: " << TIMES - count << endl;
}
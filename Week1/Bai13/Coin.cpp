#include <iostream>
#include <string>
#include <random>
#include "Coin.h"

using namespace std;

const double AMOUNT_COIN_1 = 0.25;
const double AMOUNT_COIN_2 = 0.10;
const double AMOUNT_COIN_3 = 0.05;

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

    double cash = 0;
    srand(time(NULL));
    cout << "Mat dong xu hien tai: " << coin.getSideUp() << endl;
    int count = 0;
    int i = 1;
    while (cash < 100.0)
    {
        coin.toss();
        cout << (i % 3) << " Mat dong xu hien tai: " << coin.getSideUp() << "\t";
        if (coin.getSideUp() == "Heads" && i % 3 == 0)
        {
            cout << AMOUNT_COIN_3;
            cash += AMOUNT_COIN_3 * 10;
            count++;
        }
        else if (coin.getSideUp() == "Heads" && i % 3 == 2)
        {
            cout << AMOUNT_COIN_2;
            cash += AMOUNT_COIN_2 * 10;
            count++;
        }
        else if (coin.getSideUp() == "Heads" && i % 3 == 1)
        {
            cout << AMOUNT_COIN_1;
            cash += AMOUNT_COIN_1 * 10;
            count++;
        }
        cout << endl;
        i++;
    }
    cout << "Ban gianh duoc " << cash << " xu. ";
    if (cash == 100)
        cout << "Ban da chien thang!";
    else
        cout << "Ban thua!";
}
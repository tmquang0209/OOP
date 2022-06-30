#include <bits/stdc++.h>
using namespace std;

int main()
{
    fstream file;
    file.open("data.txt", ios::out);
    for (int i = 0; i < 100; i++)
    {
        file << "Quang " << i;
        if (i != 99)
            file << endl;
    }
    file.close();
    file.clear();

    file.open("data.txt", ios::in);
    string line;

}
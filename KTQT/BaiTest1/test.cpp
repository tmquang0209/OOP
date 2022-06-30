#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main()
{
    fstream fin;
    fin.open("FileData1.txt", ios::in);
    if (!fin)
    {
        cout << "Mo file that bai" << endl;
        return 0;
    }
    string line;
    while (getline(fin, line))
    {
        char str[] = line;
    }
    fin.close();
    return 0;
}
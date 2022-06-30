#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char text[] = "0|1|2|3|4";
    char *p = strtok(text, "|");
    while (p != NULL)
    {
        cout << p << endl;
        p = strtok(NULL, "|");
    }
    return 0;
}
#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <class T>
T minimum(T a, T b)
{
    return (a < b) ? a : b;
}

int main()
{
    int a = 10, b = 20;
    double c = 10.5, d = 10.4;
    cout << maximum(a, b) << endl;
    cout << minimum(c, d) << endl;
    return 0;
}
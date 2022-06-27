#include <iostream>

using namespace std;

template <class T>
T absValue(T a)
{
    return (a > 0) ? a : -a;
}

int main()
{
    int a = 10, b = -20;
    double c = 10.5, d = -10.4;
    cout << "|a| = " << absValue(a) << endl;
    cout << "|b| = " << absValue(b) << endl;
    cout << "|c| = " << absValue(c) << endl;
    cout << "|d| = " << absValue(d) << endl;
    return 0;
}
#include <iostream>

using namespace std;

template <class T>
T total(int num)
{
    T sum = 0, n;
    for (int i = 0; i < num; i++)
    {
        cout << "num " << i + 1 << ": ";
        cin >> n;
        sum += n;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter the number of numbers: ";
    cin >> num;
    cout << "The total is: " << total<int>(num) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void arrayToFile(string fileName, int *arr, int size)
{
    fstream file;
    file.open(fileName, ios::out);
    for (int i = 0; i < size; i++)
    {
        file << arr[i] << endl;
    }
}

void fileToArray(string fileName, int *arr, int size)
{
    fstream file;
    file.open(fileName, ios::in);
    int i = 0;
    int num;
    while (file >> num)
    {
        arr[i] = num;
        i++;
    }
}

int main()
{
    int n;
    cin >> n;
    /*Array to file*/
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arrayToFile("data.txt", arr, n);
    cout << "==================================" << endl;
    /*File to array*/
    int *arr2 = new int[n];
    fileToArray("data.txt", arr2, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << endl;
    }
    return 0;
}
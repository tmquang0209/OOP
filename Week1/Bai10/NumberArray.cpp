#include <iostream>
#include "NumberArray.h"

using namespace std;

NumberArray::NumberArray(int size)
{
    array = new int[size];
}

void NumberArray::storeNumber(int index, int number)
{
    array[index] = number;
}

void NumberArray::retrieveNumber(int index) const
{
    cout << array[index] << "\t";
}

int NumberArray::highestNumber(int size) const
{
    int highest = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > highest)
        {
            highest = array[i];
        }
    }
    return highest;
}

int NumberArray::lowestNumber(int size) const
{
    int lowest = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < lowest)
        {
            lowest = array[i];
        }
    }
    return lowest;
}

double NumberArray::averageNumber(int size) const
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return (double)sum / size;
}

NumberArray::~NumberArray()
{
    delete[] array;
}

int main()
{
    NumberArray numberArray(10);
    numberArray.storeNumber(0, 10);
    numberArray.storeNumber(1, 7);
    numberArray.storeNumber(2, 5);
    numberArray.storeNumber(3, 2);
    numberArray.storeNumber(4, 9);
    numberArray.storeNumber(5, 3);
    numberArray.storeNumber(6, 1);
    numberArray.storeNumber(7, 4);
    numberArray.storeNumber(8, 6);
    numberArray.storeNumber(9, 8);
    cout << "Mang da nhap: ";

    numberArray.retrieveNumber(6);
    numberArray.retrieveNumber(7);
    numberArray.retrieveNumber(9);

    cout << endl
         << "So lon nhat: " << numberArray.highestNumber(10) << endl;
    cout << "So nho nhat: " << numberArray.lowestNumber(10) << endl;
    cout << "Trung binh: " << numberArray.averageNumber(10) << endl;
}

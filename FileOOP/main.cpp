#include <iostream>
#include <fstream> //bắt buộc có để đọc/ ghi file
using namespace std;

int main()
{
    fstream dataFile; // khai báo 1 đối tượng dataFile có kiểu fstream

    cout << "Opening file...\n";
    dataFile.open("demofile.txt", ios::out); // mở file để ghi, ios::out : cho phép ghi file
    cout << "Now writing data to the file.\n";
    for (int i = 1; i <= 100; i++)
    {
        dataFile << "Quang " << i << endl;
    }
    dataFile.close(); // sau khi thực thi file sẽ đóng luôn

    fstream outputFile;                       // khai báo 1 đối tượng outputFile có kiểu fstream
    outputFile.open("demofile.txt", ios::in); // mở file để đọc, ios::in : cho phép đọc file
    string fout;
    int count = 0;
    while (getline(outputFile, fout))
    {
        ++count;
        if (count % 24 == 0)
            system("Pause");
        cout << fout << endl;
    }

    cout << "Done.\n";
    return 0;
}
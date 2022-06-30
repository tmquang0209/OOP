#include <iostream>
#include <fstream> //bắt buộc có để đọc/ ghi file
using namespace std;

struct MovieData
{
    string title;
    string director;
    int time;
    int year;
};

MovieData input()
{
    MovieData movie;
    cout << "Name of the movie: ";
    getline(cin, movie.title);
    cout << "Director: ";
    getline(cin, movie.director);
    cout << "Time: ";
    cin >> movie.time;
    cout << "Year: ";
    cin >> movie.year;
    return movie;
}

void print(MovieData &movie)
{
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year: " << movie.year << endl;
    cout << "Running time: " << movie.time << endl;
}

int main()
{

    fstream file;
    file.open("Movie.dat", ios::in | ios::binary);
    if (!file)
    {
        cout << "File not found!" << endl;
        return 0;
    }
    MovieData movie;
    file.read(reinterpret_cast<char *>(&movie), sizeof(MovieData));

    print(movie);

    // file.open("Movie.dat", ios::out | ios::binary);
    // if (!file)
    // {
    //     cout << "File not found!" << endl;
    //     return 0;
    // }

    // MovieData movie = input();
    // file.write(reinterpret_cast<char *>(&movie), sizeof(movie));
    // file.close();
    // fstream f3, f4;
    // char data[5] = {'A', 'B', 'C', 'D', 'E'};
    // char mang[5];

    // f3.open("data.dat", ios::out | ios::binary);
    // f3.write(data, sizeof(data));
    // f3.close();

    // f3.open("data.dat", ios::in | ios::binary);
    // f3.read(mang, sizeof(mang));
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << mang[i] << "\t";
    // }
    return 0;
}
// fstream dataFile; // khai báo 1 đối tượng dataFile có kiểu fstream
// cout << "Opening file...\n";
// dataFile.open("demofile.txt", ios::out); // mở file để ghi, ios::out : cho phép ghi file
// cout << "Now writing data to the file.\n";
// for (int i = 1; i <= 100; i++)
// {
//     dataFile << "Quang " << i << endl;
// }
// dataFile.close(); // sau khi thực thi file sẽ đóng luôn

// fstream outputFile;                       // khai báo 1 đối tượng outputFile có kiểu fstream
// outputFile.open("demofile.txt", ios::in); // mở file để đọc, ios::in : cho phép đọc file
// string fout;
// int count = 0;
// while (getline(outputFile, fout))
// {
//     ++count;
//     if (count % 24 == 0)
//         system("Pause");
//     cout << fout << endl;
// }

// cout << "Done.\n";
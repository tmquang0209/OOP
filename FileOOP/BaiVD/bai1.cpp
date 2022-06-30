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
    MovieData movie = input();
    cin.ignore();
    MovieData movie2 = input();
    // print(movie);
    fstream fileTxt, fileDat;
    fileTxt.open("Movie.txt", ios::out);
    fileDat.open("Movie.dat", ios::out | ios::binary);
    if (!fileTxt)
    {
        cout << "File not found!" << endl;
        return 0;
    }
    if (!fileDat)
    {
        cout << "File not found!" << endl;
        return 0;
    }

    // ghi file text
    fileTxt << movie.title << endl;
    fileTxt << movie.director << endl;
    fileTxt << movie.year << endl;
    fileTxt << movie.time << endl;

    fileTxt << movie2.title << endl;
    fileTxt << movie2.director << endl;
    fileTxt << movie2.year << endl;
    fileTxt << movie2.time << endl;

    // ghi file dat
    fileDat.write(reinterpret_cast<char *>(&movie), sizeof(MovieData));
    fileDat.write(reinterpret_cast<char *>(&movie2), sizeof(MovieData));
    fileTxt.close();
    fileDat.close();

    // doc file txt
    fileTxt.open("Movie.txt", ios::in);
    if (!fileTxt)
    {
        cout << "File not found!" << endl;
        return 0;
    }
    cout << "file txt" << endl;
    MovieData mv1, mv2;
    getline(fileTxt, mv1.title);
    getline(fileTxt, mv1.director);
    fileTxt >> mv1.year;
    fileTxt >> mv1.time;
    fileTxt.ignore();

    getline(fileTxt, mv2.title);
    getline(fileTxt, mv2.director);
    fileTxt >> mv2.year;
    fileTxt >> mv2.time;

    print(mv1);
    print(mv2);
    cout << endl;
    // doc file dat
    fileDat.open("Movie.dat", ios::in | ios::binary);
    if (!fileDat)
    {
        cout << "File not found!" << endl;
        return 0;
    }
    MovieData mv3, mv4;
    fileDat.read(reinterpret_cast<char *>(&mv3), sizeof(MovieData));
    fileDat.read(reinterpret_cast<char *>(&mv4), sizeof(MovieData));
    cout << "file dat" << endl;
    print(mv3);
    print(mv4);

    return 0;
}
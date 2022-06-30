#include <bits/stdc++.h>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int time;
    int year;
    double cost;
    double turnover;
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
    cout << "Cost: ";
    cin >> movie.cost;
    cout << "Turnover: ";
    cin >> movie.turnover;
    return movie;
}

void print(MovieData &movie)
{
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year: " << movie.year << endl;
    cout << "Running time: " << movie.time << endl;
    cout << "Cost: " << movie.cost << endl;
    cout << "Turnover: " << movie.turnover << endl;
    if (movie.cost < movie.turnover)
    {
        cout << "Movie profit is: " << movie.turnover - movie.cost << endl;
    }
    else
    {
        cout << "Movie loss is: " << movie.cost - movie.turnover << endl;
    }
}

int main()
{
    MovieData list[3];
    for (int i = 0; i < 3; i++)
    {
        list[i] = input();
        cin.ignore();
    }

    cout << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        print(list[i]);
        cout << endl;
    }
    return 0;
}

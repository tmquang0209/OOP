#include <bits/stdc++.h>
using namespace std;
//print hello world
struct MovieData
{
    string title;
    string director;
    int year;
    MovieData(string title, string director, int year)
    {
        this->title = title;
        this->director = director;
        this->year = year;
    }
};

void print(MovieData &movie)
{
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year: " << movie.year << endl;
}

int main()
{
    struct MovieData m1("Titanic", "James Cameron", 1997);
    struct MovieData m2("Avatar", "James Cameron", 2009);
    struct MovieData m3("The Avengers", "Joss Whedon", 2012);
    struct MovieData m4("The Dark Knight", "Christopher Nolan", 2008);
    struct MovieData m5("The Dark Knight Rises", "Christopher Nolan", 2012);

    print(m1);
    cout << endl;
    print(m2);
    cout << endl;
    print(m3);
    cout << endl;
    print(m4);
    cout << endl;
    print(m5);
    return 0;
}

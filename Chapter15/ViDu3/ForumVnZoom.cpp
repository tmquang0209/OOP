#include <iostream>
#include <string>
#include "ForumVnZoom.h"
using namespace std;

ForumVnZoom::ForumVnZoom() : Forum()
{
    numPost = 0;
}

ForumVnZoom::ForumVnZoom(string name, int numPost)
{
    this->numPost = numPost;
    setInfor(name, numPost);
}

void ForumVnZoom::setInfor(string name, int numPost)
{
    updateRank(name);
    this->numPost = numPost;
}

int ForumVnZoom::getNumPost()
{
    return numPost;
}

void ForumVnZoom::updateRank(string name)
{
    if (numPost < 200)
        Forum::setInfor(name, "Ga con");
    else if (numPost < 400)
        Forum::setInfor(name, "Ga choi");
    else
        Forum::setInfor(name, "Riu sat");
}

void ForumVnZoom::print()
{
    Forum::print();
    cout << "Number of post: " << numPost << endl;
}
#ifndef FORUMVNZOOM_H
#define FORUMVNZOOM_H
#include <iostream>
#include <string>
#include "Forum.h"
using namespace std;
class ForumVnZoom : public Forum
{
private:
    int numPost;

public:
    ForumVnZoom();
    ForumVnZoom(string name, int numPost);
    void setInfor(string name, int numPost);
    int getNumPost();
    void updateRank(string name);
    void print();
};
#endif
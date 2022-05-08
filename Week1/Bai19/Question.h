#include <string>
using namespace std;

#ifndef QUESTION_H
#define QUESTION_H
class Question
{
private:
    string qs;
    string ans1;
    string ans2;
    string ans3;
    string ans4;
    int correctAns;

public:
    Question();
    Question(string, string, string, string, string, int);
    void setQs(string);
    void setAns1(string);
    void setAns2(string);
    void setAns3(string);
    void setAns4(string);
    void setCorrectAns(int);
    string getQs();
    string getAns1();
    string getAns2();
    string getAns3();
    string getAns4();
    int getCorrectAns();
    ~Question();
};
#endif
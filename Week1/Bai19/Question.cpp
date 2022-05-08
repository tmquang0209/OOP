#include <iostream>
#include <string>
#include <fstream>
#include "Question.h"

using namespace std;

Question::Question()
{
    qs = "";
    ans1 = "";
    ans2 = "";
    ans3 = "";
    ans4 = "";
    correctAns = 0;
}

Question::Question(string qs, string ans1, string ans2, string ans3, string ans4, int correctAns)
{
    this->qs = qs;
    this->ans1 = ans1;
    this->ans2 = ans2;
    this->ans3 = ans3;
    this->ans4 = ans4;
    this->correctAns = correctAns;
}

void Question::setQs(string qs)
{
    this->qs = qs;
}

void Question::setAns1(string ans1)
{
    this->ans1 = ans1;
}

void Question::setAns2(string ans2)
{
    this->ans2 = ans2;
}

void Question::setAns3(string ans3)
{
    this->ans3 = ans3;
}

void Question::setAns4(string ans4)
{
    this->ans4 = ans4;
}

void Question::setCorrectAns(int correctAns)
{
    this->correctAns = correctAns;
}

string Question::getQs()
{
    return this->qs;
}

string Question::getAns1()
{
    return this->ans1;
}

string Question::getAns2()
{
    return this->ans2;
}

string Question::getAns3()
{
    return this->ans3;
}

string Question::getAns4()
{
    return this->ans4;
}

int Question::getCorrectAns()
{
    return this->correctAns;
}

Question::~Question()
{
}

void readFile(Question[]);
void displayQuestion(Question[], int index);
int checkAnswer(Question[], int index, int playerAnswer, int score);

int main()
{
    int scorePlayer1 = 0, scorePlayer2 = 0, index = 0;

    Question *question = new Question[10];
    readFile(question);
    while (index < 10)
    {
        int answer;
        // Question player 1
        cout << "=== Cau hoi cho nguoi choi 1 ===" << endl;
        displayQuestion(question, index);
        cout << "Nhap cau tra loi: ";
        cin >> answer;
        scorePlayer1 = checkAnswer(question, index, answer, scorePlayer1);
        index++;

        // Question player 2
        cout << "=== Cau hoi cho nguoi choi 2 ===" << endl;
        displayQuestion(question, index);
        cout << "Nhap cau tra loi: ";
        cin >> answer;
        scorePlayer2 = checkAnswer(question, index, answer, scorePlayer2);
        index++;
    }

    cout << "Score player 1: " << scorePlayer1 << endl;
    cout << "Score player 2: " << scorePlayer2 << endl;

    return 0;
}

void readFile(Question question[])
{
    ifstream inFile;
    inFile.open("trivia.txt");
    if (!inFile)
    {
        cout << "File khong ton tai!";
        return;
    }
    int i = 0;
    string input;

    while (getline(inFile, input))
    {
        question[i].setQs(input);

        getline(inFile, input);
        question[i].setAns1(input);

        getline(inFile, input);
        question[i].setAns2(input);

        getline(inFile, input);
        question[i].setAns3(input);

        getline(inFile, input);
        question[i].setAns4(input);

        getline(inFile, input);
        question[i].setCorrectAns(stoi(input));
        i++;
    }
}

void displayQuestion(Question question[], int index)
{
    cout << question[index].getQs() << endl;
    cout << "1. " << question[index].getAns1() << endl;
    cout << "2. " << question[index].getAns2() << endl;
    cout << "3. " << question[index].getAns3() << endl;
    cout << "4. " << question[index].getAns4() << endl;
}

int checkAnswer(Question question[], int index, int playerAnswer, int score)
{
    if (question[index].getCorrectAns() == playerAnswer)
    {
        cout << "Dung!" << endl;
        score++;
    }
    else
    {
        cout << "Sai! Dap an dung la: " << question[index].getCorrectAns() << endl;
    }
    return score;
}
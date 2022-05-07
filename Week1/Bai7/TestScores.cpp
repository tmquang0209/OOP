#include <iostream>
#include "TestScores.h"

using namespace std;

TestScores::TestScores(double score1, double score2, double score3)
{
    this->score1 = score1;
    this->score2 = score2;
    this->score3 = score3;
}

void TestScores::setScore1(double score1)
{
    this->score1 = score1;
}

void TestScores::setScore2(double score2)
{
    this->score2 = score2;
}

void TestScores::setScore3(double score3)
{
    this->score3 = score3;
}

double TestScores::getScore1() const
{
    return score1;
}

double TestScores::getScore2() const
{
    return score2;
}

double TestScores::getScore3() const
{
    return score3;
}

double TestScores::getAverage() const
{
    return (score1 + score2 + score3) / 3;
}

int main()
{
    TestScores testScores(10, 7, 5);
    cout << testScores.getAverage() << endl;
}
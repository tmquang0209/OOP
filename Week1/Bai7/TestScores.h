#ifndef TESTSCORES_H
#define TESTSCORES_H
class TestScores
{
private:
    double score1;
    double score2;
    double score3;

public:
    TestScores(double, double, double);
    void setScore1(double);
    void setScore2(double);
    void setScore3(double);
    double getScore1() const;
    double getScore2() const;
    double getScore3() const;
    double getAverage() const;
};
#endif
#ifndef TESTSCORES_H
#define TESTSCORES_H

template <class T>
class TestScores
{
private:
    int size;
    double avg;

public:
    TestScores();
    TestScores(T arr[], int size);
    void calcAverage(T arr[], int size);
    double getAverage() const;
};
#endif
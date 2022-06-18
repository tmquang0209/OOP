#ifndef STOPWATCH_H
#define STOPWATCH_H
class StopWatch
{
private:
    int hour, minute, second;
    void normalize();

public:
    StopWatch();
    StopWatch(int h, int m, int s);
    void setSecond(int);
    float getHour() const;
    void run(int x);
    void print();
};
#endif
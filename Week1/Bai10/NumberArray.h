#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H
class NumberArray
{
private:
    int *array;

public:
    NumberArray(int);
    void storeNumber(int, int);
    void retrieveNumber(int) const;
    int highestNumber(int) const;
    int lowestNumber(int) const;
    double averageNumber(int) const;
    ~NumberArray();
};
#endif
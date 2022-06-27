#ifndef DIEM_H
#define DIEM_H
/*
template <class T>
class Diem
{
    private:
        T diem;
    public:
        Diem()
        {
            diem =0;
        }
        Diem(T d)
        {
            diem = d;
        }
        void setDiem(T d)
        {
            diem=d;
        }
        T getDiem() const
        {
            return diem;
        }
};
*/

template <class T>
class Diem
{
private:
    T diem;

public:
    Diem();
    Diem(T d);
    void setDiem(T d);
    T getDiem() const;
};
#endif // DIEM_H

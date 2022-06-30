/*
2. Thống kê lượng mưa (Bắt buộc)
Viết một chương trình cho phép người dùng nhập lượng mưa của mỗi tháng trong 12
tháng vào một mảng số double. Chương trình sẽ hiển thị tổng lượng mưa trong năm,
lượng mưa trung bình hàng tháng và các tháng có lượng mưa cao nhất và thấp nhất.
Xác thực đầu vào: Không chấp nhận số âm cho số liệu lượng mưa hàng tháng.
*/

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

double highestAverageRainfall(double[]);
double lowestAverageRainfall(double[]);

// template <class T>
int main()
{
    vector<double> arr;
    double total = 0;
    double highest = 0;
    double lowest = numeric_limits<double>::max();
    double temp;
    for (int i = 0; i < 12; i++)
    {
        do
        {
            cout << "Nhap luong mua thu " << i + 1 << ": ";
            cin >> temp;
            arr.push_back(temp);
        } while (arr[i] < 0);
        total += arr[i];
        if (arr.at(i) > highest)
        {
            highest = arr.at(i);
        }
        if (arr.at(i) < lowest)
        {
            lowest = arr.at(i);
        }
    }

    cout << "Tong luong mua trong nam: " << total << endl;
    cout << "Luong mua trung binh trong nam: " << total / 12 << endl;
    cout << "Luong mua cao nhat trong nam: " << highest << endl;
    cout << "Luong mua thap nhat trong nam: " << lowest << endl;
    return 0;
}
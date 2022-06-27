#include <iostream>
#include <string.h>
#include <fstream>
#include "Employee.h"
#include "Employee.cpp"
#include "PayrollStaff.h"
#include "PayrollStaff.cpp"
#include "ContractStaff.h"
#include "ContractStaff.cpp"
#include "CommissionStaff.h"
#include "CommissionStaff.cpp"
#include "SpecialCommissionStaff.h"
#include "SpecialCommissionStaff.cpp"

using namespace std;

int countElement(fstream &file)
{
    int count = 0;
    string line;
    while (getline(file, line))
    {
        count++;
    }
    return count;
}

void readFile(fstream &fileData, Employee *employee[])
{
    string line, employeeID, name, taxCode, salary;
    int i = 0;
    while (fileData >> line)
    {
        fileData >> employeeID;
        fileData >> name;
        fileData >> taxCode;
        if (stoi(line) == 0)
        {
            fileData >> salary;
            employee[i] = new PayrollStaff(employeeID, name, stoi(taxCode), stod(salary));
        }
        else if (stoi(line) == 1)
        {
            double hourlyWage;
            double workingHours;
            fileData >> hourlyWage;
            fileData >> workingHours;
            employee[i] = new ContractStaff(employeeID, name, stoi(taxCode), hourlyWage, workingHours);
        }
        else if (stoi(line) == 2)
        {
            double turnover;
            double discount;
            fileData >> turnover;
            fileData >> discount;
            employee[i] = new CommissionStaff(employeeID, name, stoi(taxCode), turnover, discount);
        }
        else if (stoi(line) == 3)
        {
            double turnover;
            double discount;
            double basicSalary;
            fileData >> turnover;
            fileData >> discount;
            fileData >> basicSalary;
            employee[i] = new SpecialCommissionStaff(employeeID, name, stoi(taxCode), basicSalary, turnover, discount);
        }
        i++;
    }
}

void addEmployee(fstream &fileData, Employee *employee[], int &size)
{
    cout << "***** Menu ******" << endl;
    cout << "1. Them nhan vien bien che" << endl;
    cout << "2. Them nhan vien theo gio" << endl;
    cout << "3. Them nhan vien hoa hong" << endl;
    cout << "4. Them nhan vien hoa hong dac biet" << endl;
    cout << "5. Thoat" << endl;
    int choice2;
    cout << "Nhap lua chon: ";
    cin >> choice2;

    cout << "Nhap ma nhan vien: ";
    string employeeID;
    cin >> employeeID;
    cout << "Nhap ten nhan vien: ";
    string name;
    cin >> name;
    cout << "Nhap ma so thue: ";
    int taxCode;
    cin >> taxCode;

    switch (choice2)
    {
    case 1:

        cout << "Nhap luong: ";
        double salary;
        cin >> salary;
        employee[size] = new PayrollStaff(employeeID, name, taxCode, salary);
        size++;
        break;
    case 2:
        cout << "Nhap luong theo gio: ";
        double hourlyWage;
        cin >> hourlyWage;
        cout << "Nhap so gio lam viec: ";
        double workingHours;
        cin >> workingHours;
        employee[size] = new ContractStaff(employeeID, name, taxCode, hourlyWage, workingHours);
        size++;
        break;
    case 3:
        cout << "Nhap so tien luong: ";
        double turnover;
        cin >> turnover;
        cout << "Nhap chiet khau: ";
        double discount;
        cin >> discount;
        employee[size] = new CommissionStaff(employeeID, name, taxCode, turnover, discount);
        size++;
        break;
    case 4:
        cout << "Nhap so tien luong: ";
        cin >> turnover;
        cout << "Nhap chiet khau: ";
        cin >> discount;
        cout << "Nhap luong co ban: ";
        double basicSalary;
        cin >> basicSalary;
        employee[size] = new SpecialCommissionStaff(employeeID, name, taxCode, basicSalary, turnover, discount);
        size++;
        break;
    case 5:

        break;
    default:
        cout << "Nhap sai" << endl;
        break;
    }
}

int calcSalary(Employee *employee[], int size)
{
    int totalSalary = 0;
    for (int i = 0; i < size; i++)
    {
        totalSalary += employee[i]->getSalary();
    }
    return totalSalary;
}

void displayMenu()
{
    cout << "===* Menu *===" << endl;
    cout << "1. Danh sach nhan vien" << endl;
    cout << "2. Them nhan vien" << endl;
    cout << "3. Tinh tong luong" << endl;
    cout << "4. Luu thong tin luong NV ra file thap -> cao" << endl;
    cout << "5. Tra cuu tien luong theo ma nhan vien" << endl;
    cout << "6. Thoat" << endl;
}

double calcTax(double salary)
{
    if (salary <= 11)
        return salary;
    else
        return salary - (salary - 11) * 0.1;
}

void sort(Employee *employee[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (employee[i]->getSalary() < employee[j]->getSalary())
            {
                Employee *temp = employee[i];
                employee[i] = employee[j];
                employee[j] = temp;
            }
        }
    }
}

void exportSalary(fstream &fileData, Employee *employee[], int size)
{
    fileData.close();
    fileData.open("employee.txt", ios::out);
    fileData << "MNV \t MST \t Luong\n";
    Employee *temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = employee[i];
    }
    sort(temp, size);
    for (int i = 0; i < size; i++)
    {
        double salary = temp[i]->getSalary();
        fileData << temp[i]->getEmployeeID() << "\t";
        fileData << temp[i]->getTaxCode() << "\t";
        fileData << calcTax(salary) << endl;
    }
}

void findEmployee(Employee *employee[], int size)
{
    cout << "Nhap ma nhan vien: ";
    string employeeID;
    cin >> employeeID;
    for (int i = 0; i < size; i++)
    {
        if (employee[i]->getEmployeeID() == employeeID)
        {
            cout << "=====*****=====" << endl;
            cout << "Ma nhan vien: " << employee[i]->getEmployeeID() << endl;
            cout << "Ten nhan vien: " << employee[i]->getName() << endl;
            cout << "Ma so thue: " << employee[i]->getTaxCode() << endl;
            cout << "Luong: " << employee[i]->getSalary() << endl;
            cout << "=====*****=====" << endl;
            return;
        }
    }
    cout << "Khong tim thay nhan vien" << endl;
}

void doMenu(fstream &fileData, Employee *employee[], int size)
{
    bool flag = true;
    int choice = 0;
    while (flag)
    {
        displayMenu();
        cout << "Nhap lua chon: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                cout << "=====***=====" << endl;
                employee[i]->print();
                cout << endl;
            }
            break;
        case 2:
            addEmployee(fileData, employee, size);
            break;
        case 3:
            cout << "Tong luong la: " << calcSalary(employee, size) << endl;
            break;
        case 4:
            exportSalary(fileData, employee, size);
            break;
        case 5:
            findEmployee(employee, size);
            break;
        case 6:
            flag = false;
            break;
        }
    }
}

int main()
{
    fstream fileData;
    fileData.open("FileData.txt", ios::in);
    if (!fileData)
    {
        cout << "File not found!" << endl;
        return 0;
    }
    int count = countElement(fileData);
    fileData.close();

    Employee *employee[count];
    fileData.open("FileData.txt", ios::in);
    readFile(fileData, employee);
    cout << endl;
    doMenu(fileData, employee, count);
    return 0;
}
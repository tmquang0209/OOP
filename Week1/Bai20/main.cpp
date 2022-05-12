#include <iostream>
#include "PatientAccount.h"
#include "PatientAccount.cpp"

using namespace std;

void displaySurgery();
void displayPharmacy();

int main()
{
    PatientAccount patient;
    int choice, days;
    do
    {
        cout << "===== Menu =====" << endl;
        displaySurgery();
        cout << "Moi chon: ";
        cin >> choice;
        patient.setSurgeryCharges(choice);

        cout << "===== Menu =====" << endl;
        displayPharmacy();
        cout << "Moi chon: ";
        cin >> choice;
        patient.setPharmacyCharges(choice);

        cout << "Moi nhap so ngay nam vien: ";
        do
        {
            cin >> days;
            if (days < 0)
                cout << "Nhap lai: ";
        } while (days < 0);
        patient.setDays(days);

        cout << "===== Information =====" << endl;
        cout << "So ngay nam vien: " << patient.getDays() << endl;
        cout << "Muc phi: " << patient.getRate() << endl;
        cout << "Tong chi phi: " << patient.getCharge() << endl;
        cout << "Tong cac khoan phi: " << patient.getCost() << endl;
        cout << "=========================" << endl;

        patient.setCharge(0);
    } while (choice != 0);
    return 0;
}

void displaySurgery()
{
    cout << "1. Phau thuat 1" << endl;
    cout << "2. Phau thuat 2" << endl;
    cout << "3. Phau thuat 3" << endl;
    cout << "4. Phau thuat 4" << endl;
    cout << "5. Phau thuat 5" << endl;
    cout << "0. Thoat" << endl;
}

void displayPharmacy()
{
    cout << "1. Thuoc 1" << endl;
    cout << "2. Thuoc 2" << endl;
    cout << "3. Thuoc 3" << endl;
    cout << "4. Thuoc 4" << endl;
    cout << "5. Thuoc 5" << endl;
    cout << "0. Thoat" << endl;
}
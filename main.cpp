
#include <iostream>
#include <string>
#include <vector>
#include "Equipment.h"
using namespace std;
int main() {
    vector<Equipment> equipmentList;

    int n;
    cout << "How many equipment items do you want to register? ";
    cin >> n;
    for (int i = 0; i < n; i++) {

        int id;
        string name, cat;
        float price;
        cout << "\nEnter Equipment ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Equipment Name: ";
        getline(cin, name);
        cout << "Enter Category: ";
        getline(cin, cat);

        cout << "Enter Price per day: ";
        cin >> price;
        Equipment e(id, name, cat, price, "Available");
        equipmentList.push_back(e);
        cout << "\nEquipment registered successfully!\n";
    }
    cout << "\n========== ALL EQUIPMENT DETAILS ==========\n";

    for (int i = 0; i < equipmentList.size(); i++) {

        cout << "\nEquipment " << i + 1 << endl;

        equipmentList[i].displayEquipment();
    }

    return 0;
}

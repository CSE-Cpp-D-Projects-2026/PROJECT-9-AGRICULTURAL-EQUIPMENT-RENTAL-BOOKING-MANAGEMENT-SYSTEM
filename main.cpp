
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
    int id, capacity;
    string name, category, condition;
    float price;
    string status;

    cout << "Enter Equipment ID: ";
    cin >> id;
    cout << "Enter Equipment Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Category: ";
    getline(cin, category);

    cout << "Enter Capacity: ";
    cin >> capacity;
    cout << "Enter Rental Price per day: ";
      cin >> price;

    cout << "Enter Condition: ";
    cin.ignore();
    getline(cin, condition);
    status = "Available";

    Equipment e(id, name, category, capacity, price, condition, status);
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

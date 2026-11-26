
#include "Equipment.h"

int main() {
    vector<Equipment> equipmentList;
    int id;
    string name, category, status;
    float price;
    int n;

    cout << "Enter Equipment ID: ";
    if (!(cin >> id)) {
        cout << "Invalid ID! Please enter a number." << endl;
        return 0;
    }

    cout << "Enter Equipment Name: ";
    cin >> name;

    cout << "Enter Category: ";
    cin >> category;

    cout << "Enter Price per day: ";
    if (!(cin >> price)) {
        cout << "Invalid price! Please enter a number." << endl;
        return 0;
    }

    status = "Available";

    Equipment e1(id, name, category, price, status);
    equipmentList.push_back(e1);

    cout << "\nHow many more equipment items do you want to register? ";
    if (!(cin >> n) || n < 0) {
        cout << "Invalid number!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Equipment ID: ";
        if (!(cin >> id)) {
            cout << "Invalid ID!" << endl;
            return 0;
        }

        cout << "Enter Equipment Name: ";
        cin >> name;

        cout << "Enter Category: ";
        cin >> category;

        cout << "Enter Price per day: ";
        if (!(cin >> price)) {
            cout << "Invalid price!" << endl;
            return 0;
        }

        status = "Available";

        Equipment e(id, name, category, price, status);
        equipmentList.push_back(e);
    }

    cout << "\nEquipment registered successfully!" << endl;
    cout << "\nAll Equipment Details:" << endl;

    for (int i = 0; i < equipmentList.size(); i++) {
        equipmentList[i].displayEquipment();
    }

    return 0;
}

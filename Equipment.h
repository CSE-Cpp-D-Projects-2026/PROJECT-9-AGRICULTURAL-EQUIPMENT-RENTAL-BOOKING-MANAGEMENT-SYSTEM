#include <iostream>
#include <string>
using namespace std;

class Equipment {
    int equipmentID;
    string equipmentName;
    string category;
    int capacity;
    float price;
    string condition;
    string status;
public:
    Equipment(int id, string name, string cat, int cap, float p, string cond, string s) {
        equipmentID = id;
        equipmentName = name;
        category = cat;
        capacity = cap;
        price = p;
        condition = cond;
        status = s;

    }
    void displayEquipment() {
        cout << "Equipment ID: " << equipmentID << endl;
        cout << "Name: " << equipmentName << endl;
        cout << "Category: " << category << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Price per day: " << price << endl;
        cout << "Condition: " << condition << endl;
        cout << "Status: " << status << endl;
    }

    int getEquipmentID() {
        return equipmentID;
    }

    string getEquipmentName() {
        return equipmentName;
    }

    string getCategory() {
        return category;
    }

    int getCapacity() {
        return capacity;
    }

    float getPrice() {
        return price;
    }

    string getCondition() {
        return condition;
    }

    string getStatus() {
        return status;
    }

    void setStatus(string newStatus) {
        status = newStatus;
    }

    void setEquipmentName(string newName) {
        equipmentName = newName;
    }

    void setCategory(string newCategory) {
        category = newCategory;
    }

    void setPrice(float newPrice) {
        if (newPrice > 0) {
            price = newPrice;
        }
        else {
            cout << "Invalid price!" << endl;
        }
    }
};
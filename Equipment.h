#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Equipment {
    int equipmentID;
    string equipmentName;
    string category;
    float price;
    string status;

public:
    Equipment(int id, string name, string cat, float p, string s) {
        equipmentID = id;
        equipmentName = name;
        category = cat;
        price = p;
        status = s;
    }

    void displayEquipment() {
        cout << "Equipment ID: " << equipmentID << endl;
        cout << "Name: " << equipmentName << endl;
        cout << "Category: " << category << endl;
        cout << "Price per day: " << price << endl;
        cout << "Status: " << status << endl;
    }
    string getStatus() {
        return status;
    }
    void setStatus(string newStatus) {
        status = newStatus;
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

    float getPrice() {
        return price;
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

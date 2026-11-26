#include "Equipment.h"

int main() {
    Equipment e1(101, "Projector", "Electronics", 500, "Available");

    cout << "Before booking:" << endl;
    cout << "Status: " << e1.getStatus() << endl;

    e1.setStatus("Rented");

    cout << "\nAfter booking:" << endl;
    cout << "Status: " << e1.getStatus() << endl;

    cout << "\nEquipment details:" << endl;
    e1.displayEquipment();
    
    cout << "\nTesting Getters:" << endl;
    cout << "ID: " << e1.getEquipmentID() << endl;
    cout << "Name: " << e1.getEquipmentName() << endl;
    cout << "Category: " << e1.getCategory() << endl;
    cout << "Price: " << e1.getPrice() << endl;

    return 0;
}
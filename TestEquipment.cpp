#include "Equipment.h"

int main() {
    Equipment e1(101, "Projector", "Electronics", 500, "Available");
    Equipment e2(102, "Camera", "Photography", 300, "Rented");
    Equipment e3(103, "Tripod", "Accessories", 100, "Available");

    e1.displayEquipment();
    cout << "------------------" << endl;

    e2.displayEquipment();
    cout << "------------------" << endl;

    e3.displayEquipment();

    return 0;
}

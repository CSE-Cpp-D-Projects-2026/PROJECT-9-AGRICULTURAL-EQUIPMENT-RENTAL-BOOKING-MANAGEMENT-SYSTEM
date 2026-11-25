#include <iostream>
#include <string>
using namespace std;

class Customer
{
private:
    int customerID;
    string customerName;
    string phone;

public:
    Customer();

    void registerCustomer();
    void displayCustomer();
    void updateDetails();
    int getCustomerID();
};


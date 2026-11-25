
#include "Customer.h"
Customer::Customer()
{
    customerID = 0;
    customerName = "";
    phone = "";
}
void Customer::registerCustomer()
{
    cout << "\nEnter Customer ID: ";
    cin >> customerID;
    cin.ignore();
    cout << "Enter Customer Name: ";
    getline(cin, customerName);
    cout << "Enter Phone Number: ";
    cin >> phone;

    cout << "\nCustomer registered successfully!" << endl;
}

void Customer::displayCustomer()
{
    cout << "\n----- Customer Details -----" << endl;

    cout << "Customer ID: " << customerID << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Number: " << phone << endl;
}

// Update Customer Details
void Customer::updateDetails()
{
    cin.ignore();

    cout << "\nEnter New Customer Name: ";
    getline(cin, customerName);

    cout << "Enter New Phone Number: ";
    cin >> phone;

    cout << "\nCustomer details updated successfully!" << endl;
}

int Customer::getCustomerID()
{
    return customerID;
}

#include<iostream>
#include<string>
using namespace std;
class payment
{
    private:
     int paymentid;
     int bookingid;
     double amount;
     string paymentmethod;
     string paymentstatus;
    public:
     void getpaymentdetails();
     void displaypaymentdetails();
     int getbookingid();
     int getpaymentiid();   
};

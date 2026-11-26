
#include "payment.h"
#include<iostream>
using namespace std;
void payment::getpaymentdetails()
{
    cout<<"Enter payment ID:";
    cin>>paymentid;
    cout<<"Enter booking ID:";
    cin>>bookingid;
    cout<<"Enter payment amount:";
    cin>>amount;
    cin.ignore();
    cout<<"Enter payment method:";
    getline(cin,paymentmethod);
    cout<<"Enter payment status:";
    getline(cin,paymentstatus);
}
void payment::displaypaymentdetails()
{
    cout<<"Payment details"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Payment ID: "<<paymentid<<endl;
    cout<<"Booking ID: "<<bookingid<<endl;
    cout<<"Payment amount: "<<amount<<endl;
    cout<<"Payment method: "<<paymentmethod<<endl;
    cout<<"Payment status: "<<paymentstatus<<endl;
}
int payment::getbookingid()
{
    return bookingid;
}
int payment::getpaymentiid()
{
    return paymentid;
}

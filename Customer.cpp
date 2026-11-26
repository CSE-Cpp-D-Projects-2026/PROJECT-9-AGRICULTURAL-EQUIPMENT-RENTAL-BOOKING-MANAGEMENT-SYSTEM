#include "Customer.h"
#include<iostream>
using namespace std;
void customer::getcustomerdetails()
{ 
  cout<<"Enter customer id :"<<endl;
  cin>>cid;
  cin.ignore();
  cout<<"Enter the customer name :";
  getline(cin,cname);
  cout<<"Enter customer phone number :";
  getline(cin,phoneno);
  cout<<"Enter customer address :";
  getline(cin,address);
}
void customer::displaycustomerdetails()
{
    cout<<"Customer details"<<endl;
    cout<<"----------------------"<<endl;
    cout<<"Customer ID : "<<cid<<endl;
    cout<<"Customer name :"<<cname<<endl;
    cout<<"Customer phone no :"<<phoneno<<endl;
    cout<<"Customer address :"<<address<<endl;
}
int customer::getcid() 
{
   return cid;
}
string customer::getcname() 
{ 
    return cname;
}


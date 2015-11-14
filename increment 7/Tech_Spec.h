#include<bits/stdc++.h>
using namespace std;
#ifndef TECH_SPEC_H
#define TECH_SPEC_H

class Tech_Spec
{
protected:
     string height;
     string weight;
    string width;
string base;
string grnd_clr;
string boot_space;
string kerbhgt;
string eng_no;
string cc;
int fuel_capacity;
int seat_capacity;
float mileage;
string transmission;
int no_of_gears;
string wheel_size;
string wheel_type;
public:
	Tech_Spec();
	friend istream& operator>>(istream &i,Tech_Spec &c);
	friend ostream& operator<<(ostream &o,Tech_Spec &b);
};
Tech_Spec::Tech_Spec()
{
seat_capacity=0;
mileage=0.00;
no_of_gears=0;
}

istream& operator>>(istream &i,Tech_Spec &c)
{
   cout<<"Enter Height with units : ";
   i>>c.height;
   cout<<endl;
   
   cout<<"Enter Weight with units : ";
   i>>c.weight;
   cout<<endl;
   
   cout<<"Enter Width with units : ";
   i>>c.width;
   cout<<endl;
   
  
   cout<<"Enter base with units : ";
   i>>c.base;
   cout<<endl;

   cout<<"Enter Ground Clearance with units : ";
   i>>c.grnd_clr;
   cout<<endl;
   
   cout<<"Enter Boot Space with units : ";
   i>>c.boot_space;
   cout<<endl;
   
   cout<<"Enter Kerb Weight with units : ";
   i>>c.kerbhgt;
   cout<<endl;
   
   cout<<"Enter Engine Number with units : ";
   i>>c.eng_no;
   cout<<endl;
   
   cout<<"Enter CC with units : ";
   i>>c.cc;
   cout<<endl;
   
   cout<<"Enter Fuel Capacity with units : ";
   i>>c.fuel_capacity;
   cout<<endl;
   
   cout<<"Enter Seat Capacity  : ";
   i>>c.seat_capacity;
   cout<<endl;
   
   cout<<"Enter Mileage : ";
   i>>c.mileage;
   cout<<endl;
   
   cout<<"Enter Transmission with units : ";
   i>>c.transmission;
   cout<<endl;
   
   cout<<"Enter Number Of Gears : ";
   i>>c.no_of_gears;
   cout<<endl;
   
   cout<<"Enter Wheel Size with units : ";
   i>>c.wheel_size;
   cout<<endl;
   
   cout<<"Enter Wheel Type : ";
   i>>c.wheel_type;
   cout<<endl;
   return i;  
   }

ostream& operator<<(ostream &o,Tech_Spec &a)
{
   o<<"Height : ";
   o<<a.height;
   o<<endl;
   
   o<<"Weight : ";
   o<<a.weight;
   o<<endl;
   
   o<<"Width : ";
   o<<a.width;
   o<<endl;
   
  
   o<<"Base : ";
   o<<a.base;
   o<<endl;

   o<<"Ground Clearance : ";
   o<<a.grnd_clr;
   o<<endl;
   
   o<<"Boot Space : ";
   o<<a.boot_space;
   o<<endl;
   
   o<<"Kerb Weight : ";
   o<<a.kerbhgt;
   o<<endl;
   
   o<<"Engine Number : ";
   o<<a.eng_no;
   o<<endl;
   
   o<<"CC : ";
   o<<a.cc;
   o<<endl;
   
   o<<"Fuel Capacity : ";
   o<<a.fuel_capacity;
   o<<endl;
   
   o<<"Seat Capacity  : ";
   o<<a.seat_capacity;
   o<<endl;
   
   o<<"Mileage : ";
   o<<a.mileage;
   o<<endl;
   
   o<<"Transmission : ";
   o<<a.transmission;
   o<<endl;
   
   o<<"Number Of Gears : ";
   o<<a.no_of_gears;
   o<<endl;
   
   o<<"Wheel Size : ";
   o<<a.wheel_size;
   o<<endl;
   
   o<<"Wheel Type : ";
   o<<a.wheel_type;
   o<<endl; 
   return o; 
}

#endif

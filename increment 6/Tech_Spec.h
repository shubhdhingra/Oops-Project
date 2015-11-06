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
string fuel_capacity;
int seat_capacity;
float mileage;
string transmission;
int no_of_gears;
string wheel_size;
string wheel_type;
public:
	Tech_Spec();
	void setvalue();
	void output();
};
Tech_Spec::Tech_Spec()
{
seat_capacity=0;
mileage=0.00;
no_of_gears=0;
}
void Tech_Spec::setvalue()
{
   cout<<"Enter Height with units : ";
   cin>>height;
   cout<<endl;
   
   cout<<"Enter Weight with units : ";
   cin>>weight;
   cout<<endl;
   
   cout<<"Enter Width with units : ";
   cin>>width;
   cout<<endl;
   
  
   cout<<"Enter base with units : ";
   cin>>base;
   cout<<endl;

   cout<<"Enter Ground Clearance with units : ";
   cin>>grnd_clr;
   cout<<endl;
   
   cout<<"Enter Boot Space with units : ";
   cin>>boot_space;
   cout<<endl;
   
   cout<<"Enter Kerb Weight with units : ";
   cin>>kerbhgt;
   cout<<endl;
   
   cout<<"Enter Engine Number with units : ";
   cin>>eng_no;
   cout<<endl;
   
   cout<<"Enter CC with units : ";
   cin>>cc;
   cout<<endl;
   
   cout<<"Enter Fuel Capacity with units : ";
   cin>>fuel_capacity;
   cout<<endl;
   
   cout<<"Enter Seat Capacity  : ";
   cin>>seat_capacity;
   cout<<endl;
   
   cout<<"Enter Mileage : ";
   cin>>mileage;
   cout<<endl;
   
   cout<<"Enter Transmission with units : ";
   cin>>transmission;
   cout<<endl;
   
   cout<<"Enter Number Of Gears : ";
   cin>>no_of_gears;
   cout<<endl;
   
   cout<<"Enter Wheel Size with units : ";
   cin>>wheel_size;
   cout<<endl;
   
   cout<<"Enter Wheel Type : ";
   cin>>wheel_type;
   cout<<endl;  
}

void Tech_Spec::output()
{
   cout<<"Height : ";
   cout<<height;
   cout<<endl;
   
   cout<<"Weight : ";
   cout<<weight;
   cout<<endl;
   
   cout<<"Width : ";
   cout<<width;
   cout<<endl;
   
  
   cout<<"Base : ";
   cout<<base;
   cout<<endl;

   cout<<"Ground Clearance : ";
   cout<<grnd_clr;
   cout<<endl;
   
   cout<<"Boot Space : ";
   cout<<boot_space;
   cout<<endl;
   
   cout<<"Kerb Weight : ";
   cout<<kerbhgt;
   cout<<endl;
   
   cout<<"Engine Number : ";
   cout<<eng_no;
   cout<<endl;
   
   cout<<"CC : ";
   cout<<cc;
   cout<<endl;
   
   cout<<"Fuel Capacity : ";
   cout<<fuel_capacity;
   cout<<endl;
   
   cout<<"Seat Capacity  : ";
   cout<<seat_capacity;
   cout<<endl;
   
   cout<<"Mileage : ";
   cout<<mileage;
   cout<<endl;
   
   cout<<"Transmission : ";
   cout<<transmission;
   cout<<endl;
   
   cout<<"Number Of Gears : ";
   cout<<no_of_gears;
   cout<<endl;
   
   cout<<"Wheel Size : ";
   cout<<wheel_size;
   cout<<endl;
   
   cout<<"Wheel Type : ";
   cout<<wheel_type;
   cout<<endl;  
}


#endif

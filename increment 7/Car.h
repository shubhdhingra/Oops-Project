#include<bits/stdc++.h>
using namespace std;
#include "Category.h"
#include "Tech_Spec.h"
#ifndef CAR_H
#define CAR_H

class Car : public Category
{
	protected : 
	      string car_name;
	      Tech_Spec ts;
    public :
    	  Car();
    	  string get_car_name() const;
     	  friend istream& operator>>(istream &i,Car &c);
    	  friend ostream& operator<<(ostream &o,Car &c);
};
Car::Car():Category(),ts()
{
}
istream& operator>>(istream &i,Car &c)
{
	i>>static_cast<Category&>(c);
	cout<<"Enter Car Name : ";
	i>>c.car_name;
	cin>>c.ts;
	return i;
}
ostream& operator<<(ostream &o,Car &c)
{
	o<<static_cast<Category &>(c);
	cout<<"Car Name : ";
	o<<c.car_name<<endl;
	cout<<c.ts;
	return o;
}


#endif

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
    	  void Set();
    	  void print();
    	  string get_car_name() const;
};
Car::Car():Category(),ts()
{
}
void Car::Set()
{
	Category::SetValue();
	cout<<"Enter Car Name : ";
	cin>>car_name;
	ts.setvalue();
}
void Car::print()
{
	Category::output();
	cout<<"Enter Car Name : ";
	cout<<car_name<<endl;
	ts.output();
}
#endif

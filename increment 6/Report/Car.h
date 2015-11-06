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
#endif

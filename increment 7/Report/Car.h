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

#endif

#include<bits/stdc++.h>
using namespace std;

#include "Interior.h"
#include "Exterior.h"
#include "Car.h"
#define ll long long int 

#ifndef MODEL_H
#define MODEL_H
class Model:public Car
{
	protected:
		string m_name;
		ll price;
		string dor;
		string colour[20];
		int noc;
		Interior i;
		Exterior e;
	public:
	   Model();
	   void SetValue();
	   void output();
	   friend istream& operator>>(istream &i,Model &c);
	   friend ostream& operator<<(ostream &o,Model &c);
	   string mod_name() const;
	   ll get_price() const;
	   string get_dor() const;
	   //operator overloading to be introduced
};
#endif

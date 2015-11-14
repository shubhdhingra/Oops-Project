#include<bits/stdc++.h>
using namespace std;
#include "Car.h"
#include "Interior.h"
#include "Exterior.h"
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
	   friend istream& operator>>(istream &i,Model &c);
	   friend ostream& operator<<(ostream &o,Model &c);
	   string mod_name() const;
	   ll get_price() const;
	   string get_dor() const;
};

Model::Model():Car(),i(),e()
{
    price=0;
	noc=0;
}
string Model::get_dor() const
{
	return dor;
}
string Model::mod_name() const
{
	return m_name;
}
ll Model::get_price() const
{
	return price;
}
istream& operator>>(istream &i,Model &c)
{
	i>>static_cast<Car&>(c);
	cout<<"Enter Model Name : "<<" ";
	i>>c.m_name;
	cout<<endl;
	cout<<"Enter Model Price : "<<" ";
	i>>c.price;
	cout<<endl;
	cout<<"Enter Model Date of Release : "<<" ";
	i>>c.dor;
	cout<<endl;
	cout<<"Enter Number of Colours : "<<" ";
	i>>c.noc;
	cout<<endl;
	cout<<"Enter Colours : \n";
	for(int j=0;j<c.noc;j++)
	{
		i>>c.colour[j];
	}
	cin>>c.i;//.Setvalue();
	cin>>c.e;//.Setvalue();
	return i;
}
ostream& operator<<(ostream &o,Model &c)
{
	
	o<<static_cast<Car&>(c);
	o<<"Model Name : "<<" ";
	o<<c.m_name;
	o<<endl;
	o<<"Model Price : "<<" ";
	o<<c.price;
	o<<endl;
	o<<"Date of Release : "<<" ";
	o<<c.dor;
	o<<endl;
	o<<"Number of Colours : "<<" ";
	o<<c.noc;
	o<<endl;
	o<<"Colours : \n";
	for(int j=0;j<c.noc;j++)
	{
		o<<c.colour[j]<<endl;
	}
	o<<c.i;//.output();
	o<<c.e;//e.output();
	return o;
}
#endif

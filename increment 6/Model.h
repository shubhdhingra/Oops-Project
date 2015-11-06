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
	   void SetValue();
	   void output();
	   string mod_name() const;
	   ll get_price() const;
	   string get_dor() const;
	   //operator overloading to be introduced
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
void Model::SetValue()
{
	Car::Set();
	cout<<"Enter Model Name : "<<" ";
	cin>>m_name;
	cout<<endl;
	cout<<"Enter Model Price : "<<" ";
	cin>>price;
	cout<<endl;
	cout<<"Enter Model Date of Release : "<<" ";
	cin>>dor;
	cout<<endl;
	cout<<"Enter Number of Colours : "<<" ";
	cin>>noc;
	cout<<endl;
	cout<<"Enter Colours : \n";
	for(int j=0;j<noc;j++)
	{
		cin>>colour[j];
	}
	i.Setvalue();
	e.Setvalue();
}
void Model::output()
{
	Car::print();
	cout<<"Model Name : "<<" ";
	cout<<m_name;
	cout<<endl;
	cout<<"Model Price : "<<" ";
	cout<<price;
	cout<<endl;
	cout<<"Date of Release : "<<" ";
	cout<<dor;
	cout<<endl;
	cout<<"Number of Colours : "<<" ";
	cout<<noc;
	cout<<endl;
	cout<<"Colours : \n";
	for(int j=0;j<noc;j++)
	{
		cout<<colour[j];
	}
	i.output();
	e.output();
}
#endif

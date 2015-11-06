#include<bits/stdc++.h>
using namespace std;
#ifndef COMPANY_H
#define COMPANY_H

class Company
{
	protected:
		string c_name;
		string c_add;
		int c_noc;
	public:
		    Company();
			Company(string name,string add,int n);
			 string get_name() const;
			 string get_add() const;
			 int get_noc() const;
			 void output();
			//~Company();
};

Company::Company()
{
	c_noc=0;
}
Company::Company(string name,string add,int n)
{
	c_name=name;
	c_add=add;
	c_noc=n;
}
string Company::get_name() const
{
	return c_name;
}
string Company::get_add() const
{
	return c_add;
}
int Company::get_noc() const
{
	return c_noc;
}
void Company::output()
{
	cout<<"Company Name :"<<c_name<<endl;
	cout<<"Company Address :"<<c_add<<endl;
	cout<<"Types of Cars produced :"<<c_noc<<endl;
}

#endif

#include<bits/stdc++.h>
using namespace std;
#include "Dealer.h"
#ifndef COMPANY_H
#define COMPANY_H

class Company
{
	protected:
		string c_name;
		string c_add;
		Dealer *c;
		int c_nod;
	public:
		     Company();
			 Company(string name,string add);
			 string get_name() const;
			 string get_add() const;
			 void update();
			 string Dlr_name() const;
			 string Dlr_add() const;
			 string Dlr_lno() const;
			 int get_nod() const;
			 void output();
};

Company::Company()
{
	c_nod=1;
	c=new Dealer;
	c->SetValue();
}
Company::Company(string name,string add)
{
	c_nod=1;
	c=new Dealer;
	c->SetValue();
	c_name=name;
	c_add=add;
}
string Company::get_name() const
{
	return c_name;
}
string Company::get_add() const
{
	return c_add;
}
int Company::get_nod() const
{
	return c_nod;
}
void Company::output()
{
	cout<<"Company Name :"<<c_name<<endl;
	cout<<"Company Address :"<<c_add<<endl;
	cout<<"Number Of Dealers :"<<c_nod<<endl;
	c->output();
}
void Company::update()
{
	cout<<"\t\tTo Update\n 1.Company Name\n 2.Company Address\n 3.Number of Dealers\n 4.Dealer Info \nEnter Choice ";
	int ch;
	cin>>ch;
	string a;
	int t;
	switch(ch)
	{
		case 1: //string a;
		        cout<<"\nEnter Company Name ";
		        cin>>a;
		        c_name=a;
		        cout<<"Success\n";
		        break;
		case 2: cout<<"\nEnter Company Address ";
		        cin>>a;
		        c_add=a;
		        cout<<"Success\n";
		        break;
		case 3: cout<<"\nEnter New Number Of Dealers ";
		        cin>>t;
		        c_nod=t;
		        cout<<"Success\n";
		        break;
	   case 4: c->update();
	}
	
}

string Company::Dlr_add() const
{
	return c->get_add();
}

string Company::Dlr_name() const
{
	return c->get_name();
}

string Company::Dlr_lno() const
{
	return c->get_lno();
}
#endif

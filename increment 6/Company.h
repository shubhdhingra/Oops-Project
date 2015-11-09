#include<bits/stdc++.h>
using namespace std;
#include "Dealer.h"
#include "Model.h"
#ifndef COMPANY_H
#define COMPANY_H

class Company
{
	protected:
		string c_name;
		string c_add;
		Dealer c[5001];
		Model *c_car[5000];
		int c_nod;
		int c_noc;
	public:
		     Company();
			 Company(string name,string add);
			 string get_name() const;
			 void newdealer();
			 void newcar();
			 string get_add() const;
			 void update();
			 string Dlr_name() const;
			 string Dlr_add() const;
			 string Dlr_lno() const;
			 int get_nod() const;
			 int get_noc() const;
			 void output();
};

Company::Company()
{
	c_nod=0;
	c_noc=0;
	c_car[c_noc]=new Model();
	c_car[c_noc]->SetValue();
	c[c_nod].SetValue();
	c_nod=1;
	c_noc=1;	
}
Company::Company(string name,string add)
{
	c_nod=0;
	c_noc=0;
	c_car[c_noc]=new Model();
	c_car[c_noc]->SetValue();
	c[c_nod].SetValue();
	c_noc=1;
	c_nod=1;	
	c_name=name;
	c_add=add;
}
void Company::newdealer()
{
	c[c_nod].SetValue();
	c_nod++;	
}
void Company::newcar()
{
	//c_noc=0;
	c_car[c_noc]=new Model();
	c_car[c_noc]->SetValue();
	c_noc++;
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
int Company::get_noc() const
{
	return c_noc;
}

void Company::output()
{
	cout<<"Company Name :"<<c_name<<endl;
	cout<<"Company Address :"<<c_add<<endl;
	cout<<"Number Of Dealers :"<<c_nod<<endl;
	cout<<"Dealer Info\n";
	for(int i=0;i<c_nod;i++)
	c[i].output();
	cout<<"Number Of Cars :"<<c_noc<<endl;
	cout<<"Car Info\n";
	for(int i=0;i<c_noc;i++)
	c_car[i]->output();
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
	   case 4:cout<<"Enter License Number of the Dealer to be updated : ";
	          cin>>a; 
	           for(int i=0;i<c_nod;i++)//Exception Handling Required
	           {
					string b=c[i].get_lno();
					if(b==a)
					{
						c[i].update();
						break;
					}
			   }
			   break;
	}
}

string Company::Dlr_add() const
{
	string a;
	cout<<"Enter License Number of the Dealer whose address is needed : ";
    cin>>a; 
	for(int i=0;i<c_nod;i++)//Exception Handling Required
	{
		string b=c[i].get_lno();
		if(b==a)
		{
		return c[i].get_add();
		break;
		}
	}
}

string Company::Dlr_name() const
{
	string a;
	cout<<"Enter License Number of the Dealer whose name is needed : ";
    cin>>a; 
	for(int i=0;i<c_nod;i++)//Exception Handling Required
	{
		string b=c[i].get_lno();
		if(b==a)
		{
		return c[i].get_name();
		break;
		}
	}
}


string Company::Dlr_lno() const
{
	string a;
	cout<<"Enter Name of the Dealer whose license number is needed : ";
    cin>>a; 
	for(int i=0;i<c_nod;i++)//Exception Handling Required
	{
		string b=c[i].get_name();
		if(b==a)
		{
		return c[i].get_lno();
		break;
		}
	}
}
#endif

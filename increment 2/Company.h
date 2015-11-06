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
			 void update();
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
void Company::update()
{
	cout<<"\t\tTo Update\n 1.Company Name\n 2.Company Address\n 3.Types of Car\nEnter Choice ";
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
		case 3: cout<<"\nEnter New Categories of Car ";
		        cin>>t;
		        c_noc=t;
		        cout<<"Success\n";
		        break;
	}
	
}


#endif

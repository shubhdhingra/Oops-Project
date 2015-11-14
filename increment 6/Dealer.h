#include<bits/stdc++.h>
using namespace std;
#ifndef DEALER_H
#define DEALER_H
class Dealer
{
protected:
string d_name;
string d_add;
string l_no;
public:
Dealer();
Dealer(string name,string add,string n);
void update();
void SetValue();
string get_name() const;
string get_add() const;
string get_lno() const;	
friend void print_dealer(Dealer d);
};
Dealer::Dealer()
{
	l_no="00";
}
Dealer::Dealer(string name,string add,string n)
{
	d_name=name;
	d_add=add;
	l_no=n;
}
void Dealer::update()
{
	cout<<"\t\tTo Update\n 1.Dealer Name\n 2.Dealer Address\n 3.License Number \n Enter Choice ";
	int ch;
	cin>>ch;
	string a;
	int t;
	switch(ch)
	{
		case 1: //string a;
		        cout<<"\nEnter Dealer Name ";
		        cin>>a;
		        d_name=a;
		        cout<<"Success\n";
		        break;
		case 2: cout<<"\nEnter Dealer Address ";
		        cin>>a;
		        d_add=a;
		        cout<<"Success\n";
		        break;
		case 3: cout<<"\nEnter New License Number ";
		        cin>>a;
		        l_no=a;
		        cout<<"Success\n";
		        break;
	}
}
void Dealer::SetValue()
{
	cout<<"Dealer Name : "<<" ";
	cin>>d_name;
	cout<<endl;
	cout<<"Dealer Address : "<<" ";
	cin>>d_add;
	cout<<endl;
	cout<<"Dealer License Number : "<<" ";
	cin>>l_no;
	cout<<endl;
}
string Dealer::get_name() const
{
	return d_name;
}
string Dealer::get_add() const
{
	return d_add;
}
string Dealer::get_lno() const
{
	return l_no;
}

void print_dealer(Dealer d)
{
	cout<<"Dealer Name :"<<d.d_name<<endl;
	cout<<"Dealer Address :"<<d.d_add<<endl;
	cout<<"Dealer License Number :"<<d.l_no<<endl;
}
#endif

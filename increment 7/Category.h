#include<bits/stdc++.h>
using namespace std;
#ifndef CATEGORY_H
#define CATEGORY_H
class Category
{
protected:
string cat_name;
//int cat_noc;
public:
Category();
Category(string name);
void update();
friend istream& operator>>(istream &i,Category &c);
friend ostream& operator<<(ostream &o,Category &b);
string get_name() const;
};
Category::Category()
{
	//cat_noc=0;
}
Category::Category(string a)
{
	cat_name=a;
	//cat_noc=n;
}
string Category::get_name()const
{
	return cat_name;
}
/*int Category::get_noc()const
{
	return cat_noc;
}*/
void Category::update()
{
	cout<<"\t\tTo Update\n 1.Categtory Name\n Enter Choice ";
	int ch;
	cin>>ch;
	string a;
	int t;
	switch(ch)
	{
		case 1: //string a;
		        cout<<"\nEnter Category Name ";
		        cin>>a;
		        cat_name=a;
		        cout<<"Success\n";
		        break;
	/*	case 2: cout<<"\nEnter New Number of Car ";
		        cin>>t;
		        cat_noc=t;
		        cout<<"Success\n";
		        break;
	*/}
}
istream& operator>>(istream &i,Category &c)
{
	cout<<"Category Name :"<<" ";
	i>>c.cat_name;
	cout<<endl;
	return i;
}
ostream& operator<<(ostream &o,Category &b)
{
	o<<"Category Name :"<<b.cat_name<<endl;
	return o;
	//cout<<"Number of Cars produced :"<<cat_noc<<endl;
}

#endif

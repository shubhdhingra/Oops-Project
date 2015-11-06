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
Category(string name,int n);
void update();
void SetValue();
string get_name() const;
int get_noc() const;
void output();	
};
Category::Category()
{
	//cat_noc=0;
}
Category::Category(string a,int n)
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
void Category::SetValue()
{
	cout<<"Category Name :"<<cat_name<<" ";
	cin>>cat_name;
	cout<<endl;
}
void Category::output()
{
	cout<<"Category Name :"<<cat_name<<endl;
	//cout<<"Number of Cars produced :"<<cat_noc<<endl;
}

#endif

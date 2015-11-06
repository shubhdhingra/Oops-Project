#include<bits/stdc++.h>
using namespace std;
#include "Dealer.h"
#include "Category.h"
#ifndef COMPANY_H
#define COMPANY_H

class Company
{
	protected:
		string c_name;
		string c_add;
		Dealer c[5001];
		Category *cat[6];
		int c_nod;
		int c_noc;
	public:
		     Company();
			 Company(string name,string add);
			 string get_name() const;
			 void newdealer();
			 void newcategory();
			 string get_add() const;
			 void update();
			 string Dlr_name() const;
			 string Dlr_add() const;
			 string Dlr_lno() const;
			 int get_nod() const;
			 int get_noc() const;
			 void output();
};


#endif

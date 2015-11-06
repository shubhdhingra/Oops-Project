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
		Dealer *c[5001];
		int c_nod;
	public:
		     Company();
			 Company(string name,string add);
			 string get_name() const;
			 void newdealer();
			 string get_add() const;
			 void update();
			 string Dlr_name() const;
			 string Dlr_add() const;
			 string Dlr_lno() const;
			 int get_nod() const;
			 void output();
};


#endif

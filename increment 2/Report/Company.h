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
			 void update();
			 string get_add() const;
			 int get_noc() const;
			 void output();
			//~Company();
};

#endif

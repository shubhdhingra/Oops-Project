#include<bits/stdc++.h>
using namespace std;
#ifndef TECH_SPEC_H
#define TECH_SPEC_H
class Tech_Spec
{
protected:
     string height;
     string weight;
    string width;
string base;
string grnd_clr;
string boot_space;
string kerbhgt;
string eng_no;
string cc;
int fuel_capacity;
int seat_capacity;
float mileage;
string transmission;
int no_of_gears;
string wheel_size;
string wheel_type;
public:
	Tech_Spec();
	void setvalue();
	void output();
};
#endif

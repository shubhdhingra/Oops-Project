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
friend istream& operator>>(istream &i,Dealer &d);
string get_name() const;
string get_add() const;
string get_lno() const;
friend void print_dealer(Dealer d);	
};
#endif
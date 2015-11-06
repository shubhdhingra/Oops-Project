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
void output();	
};
#endif

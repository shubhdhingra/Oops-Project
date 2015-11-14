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
#endif

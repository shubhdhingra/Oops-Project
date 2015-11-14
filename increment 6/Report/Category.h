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
void SetValue();
string get_name() const;
//int get_noc() const;
void output();	
};
#endif

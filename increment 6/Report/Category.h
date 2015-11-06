#include<bits/stdc++.h>
#include "Company.h"
using namespace std;
#ifndef CATEGORY_H
#define CATEGORY_H
class Category:public Company
{
protected:
string cat_name;
int cat_noc;
public:
Category():Company();
Category(string name,int n):Co;
void update();
void SetValue();
string get_name() const;
int get_noc() const;
void output();	
};
#endif

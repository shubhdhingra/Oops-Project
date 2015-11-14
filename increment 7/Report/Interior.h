#include<bits/stdc++.h>
using namespace std;
#ifndef INTERIOR_H
#define INTERIOR_H
class Interior
{
	protected:
bool abs;
bool airbags;
bool immobilizer;
bool hillcontrol;
bool w4d;
bool Centrallocking;
bool psteerin;
bool pwindow;
bool audio;
bool deffoger;
bool revcamera;
bool cupholder;
bool selfstart;
bool powerrest;
bool armrest;
bool footrest;
bool driverseatadj;
  public:
	Interior();
    friend istream& operator>>(istream &i,Interior &c);
    friend ostream& operator<<(ostream &o,Interior &c);
};
#endif

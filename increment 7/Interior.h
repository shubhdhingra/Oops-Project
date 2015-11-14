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
Interior::Interior()
{
abs=0;
airbags=0; 
immobilizer=0;
hillcontrol=0;
w4d=0;
Centrallocking=0;
psteerin=0;
pwindow=0;
audio=0;
deffoger=0;
revcamera=0;
cupholder=0;
selfstart=0;
powerrest=0; 
armrest=0;
footrest=0;
driverseatadj=0;	
}
istream& operator>>(istream &i,Interior &c)
{
	cout<<"Enter Interior Specifications\n";
	cout<<"ABS\t1.Yes\t0.No : ";
	i>>c.abs;
	cout<<endl;
	
	cout<<"AIRBAGS\t1.Yes\t0.No : ";
	i>>c.airbags;
	cout<<endl;
	
	cout<<"IMMOBILIZER\t1.Yes\t0.No : ";
	i>>c.immobilizer;
	cout<<endl;
	
	cout<<"HILL CONTROL\t1.Yes\t0.No : ";
	i>>c.hillcontrol;
	cout<<endl;
	
	cout<<"4 WHEEL DRIVE\t1.Yes\t0.No : ";
	i>>c.w4d;
	cout<<endl;
	
	cout<<"CENTRAL LOCKING\t1.Yes\t0.No : ";
	i>>c.Centrallocking;
	cout<<endl;
	
	cout<<"POWER STEERING\t1.Yes\t0.No : ";
	i>>c.psteerin;
	cout<<endl;
	
	cout<<"POWER WINDOW\t1.Yes\t0.No : ";
	i>>c.pwindow;
	cout<<endl;
	
	cout<<"AUDIO\t1.Yes\t0.No : ";
	i>>c.audio;
	cout<<endl;
	
	cout<<"DEV FORGER\t1.Yes\t0.No : ";
	i>>c.deffoger;
	cout<<endl;
	
	cout<<"REV CAMERA\t1.Yes\t0.No : ";
	i>>c.revcamera;
	cout<<endl;
	
	cout<<"CUP HOLDER\t1.Yes\t0.No : ";
	i>>c.cupholder;
	cout<<endl;
	
	cout<<"SELF START\t1.Yes\t0.No : ";
	i>>c.selfstart;
	cout<<endl;
	
	cout<<"POWER REST\t1.Yes\t0.No : ";
	i>>c.powerrest;
	cout<<endl;
	
	cout<<"ARM REST\t1.Yes\t0.No : ";
	i>>c.armrest;
	cout<<endl;
	
	cout<<"FOOT REST\t1.Yes\t0.No : ";
	i>>c.footrest;
	cout<<endl;
	
	cout<<"DRIVER SEAT ADJACENT\t1.Yes\t0.No : ";
	i>>c.driverseatadj;
	cout<<endl;
}
ostream& operator<<(ostream &o,Interior &c)
{
	o<<".....Interior Specification.......\n";
	o<<"Specification\t\tStatus\n";
	
	o<<"abs\t\t"<<c.abs;
	o<<endl;
	

	o<<"airbags\t\t"<<c.airbags;
	o<<endl;
	
	
	o<<"immobilizer\t\t"<<c.immobilizer;
	o<<endl;
	
	
	o<<"hill control\t\t"<<c.hillcontrol;
	o<<endl;
	
	
	o<<"4 wheel drive\t"<<c.w4d;
	o<<endl;
	
	
	o<<"Central locking\t\t"<<c.Centrallocking;
	o<<endl;
	
	
	o<<"power steering\t\t"<<c.psteerin;
	o<<endl;
	
	
	o<<"power window\t\t"<<c.pwindow;
	o<<endl;
	
	
	o<<"audio\t\t"<<c.audio;
	o<<endl;
	
	
	o<<"def foger\t\t"<<c.deffoger;
	o<<endl;
	
	
	o<<"rev camera\t\t"<<c.revcamera;
	o<<endl;
	
	
	o<<"cup holder\t\t"<<c.cupholder;
	o<<endl;
	
	
	o<<"self start\t\t"<<c.selfstart;
	o<<endl;
	
	
	o<<"power rest\t\t"<<c.powerrest;
	o<<endl;
	
	
	o<<"arm rest\t\t"<<c.armrest;
	o<<endl;
	
	
	o<<"foot rest\t\t"<<c.footrest;
	o<<endl;
	
	
	o<<"driver seat adjacent\t"<<c.driverseatadj;
	o<<endl;
	
}
#endif

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
	void Setvalue();
	void output();
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
void Interior::Setvalue()
{
	cout<<"Enter Interior Specifications\n";
	cout<<"ABS\t1.Yes\t0.No : ";
	cin>>abs;
	cout<<endl;
	
	cout<<"AIRBAGS\t1.Yes\t0.No : ";
	cin>>airbags;
	cout<<endl;
	
	cout<<"IMMOBILIZER\t1.Yes\t0.No : ";
	cin>>immobilizer;
	cout<<endl;
	
	cout<<"HILL CONTROL\t1.Yes\t0.No : ";
	cin>>hillcontrol;
	cout<<endl;
	
	cout<<"4 WHEEL DRIVE\t1.Yes\t0.No : ";
	cin>>w4d;
	cout<<endl;
	
	cout<<"CENTRAL LOCKING\t1.Yes\t0.No : ";
	cin>>Centrallocking;
	cout<<endl;
	
	cout<<"POWER STEERING\t1.Yes\t0.No : ";
	cin>>psteerin;
	cout<<endl;
	
	cout<<"POWER WINDOW\t1.Yes\t0.No : ";
	cin>>pwindow;
	cout<<endl;
	
	cout<<"AUDIO\t1.Yes\t0.No : ";
	cin>>audio;
	cout<<endl;
	
	cout<<"DEV FORGER\t1.Yes\t0.No : ";
	cin>>deffoger;
	cout<<endl;
	
	cout<<"REV CAMERA\t1.Yes\t0.No : ";
	cin>>revcamera;
	cout<<endl;
	
	cout<<"CUP HOLDER\t1.Yes\t0.No : ";
	cin>>cupholder;
	cout<<endl;
	
	cout<<"SELF START\t1.Yes\t0.No : ";
	cin>>selfstart;
	cout<<endl;
	
	cout<<"POWER REST\t1.Yes\t0.No : ";
	cin>>powerrest;
	cout<<endl;
	
	cout<<"ARM REST\t1.Yes\t0.No : ";
	cin>>armrest;
	cout<<endl;
	
	cout<<"FOOT REST\t1.Yes\t0.No : ";
	cin>>footrest;
	cout<<endl;
	
	cout<<"DRIVER SEAT ADJACENT\t1.Yes\t0.No : ";
	cin>>driverseatadj;
	cout<<endl;
}
void Interior::output()
{
	cout<<".....Interior Specification.......\n";
	cout<<"Specification\t\tStatus";
	
	cout<<"abs\t\t"<<abs;
	cout<<endl;
	

	cout<<"airbags\t\t"<<airbags;
	cout<<endl;
	
	
	cout<<"immobilizer\t\t"<<immobilizer;
	cout<<endl;
	
	
	cout<<"hill control\t\t"<<hillcontrol;
	cout<<endl;
	
	
	cout<<"4 wheel drive\t"<<w4d;
	cout<<endl;
	
	
	cout<<"Central locking\t\t"<<Centrallocking;
	cout<<endl;
	
	
	cout<<"power steering\t\t"<<psteerin;
	cout<<endl;
	
	
	cout<<"power window\t\t"<<pwindow;
	cout<<endl;
	
	
	cout<<"audio\t\t"<<audio;
	cout<<endl;
	
	
	cout<<"def foger\t\t"<<deffoger;
	cout<<endl;
	
	
	cout<<"rev camera\t\t"<<revcamera;
	cout<<endl;
	
	
	cout<<"cup holder\t\t"<<cupholder;
	cout<<endl;
	
	
	cout<<"self start\t\t"<<selfstart;
	cout<<endl;
	
	
	cout<<"power rest\t\t"<<powerrest;
	cout<<endl;
	
	
	cout<<"arm rest\t\t"<<armrest;
	cout<<endl;
	
	
	cout<<"foot rest\t\t"<<footrest;
	cout<<endl;
	
	
	cout<<"driver seat adjacent\t"<<driverseatadj;
	cout<<endl;
	
}
#endif

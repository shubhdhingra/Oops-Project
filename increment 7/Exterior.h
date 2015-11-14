#include<bits/stdc++.h>
using namespace std;
#ifndef EXTERIOR_H
#define EXTERIOR_H

class Exterior
{
	protected:
bool keyless_entr;
bool sunroof;
bool rear_viper;
bool rain_sensing_viper;
bool alloy_wheel;
bool roof_rail;
bool plamp;
bool fog_light;
bool moonroof;
bool autoheadlamp;
bool steelrims;
bool rearspoiler;
bool chromegrill;
		public:
			Exterior();
			friend istream& operator>>(istream &i,Exterior &c);
    	    friend ostream& operator<<(ostream &o,Exterior &c);

};

Exterior::Exterior()
{
 keyless_entr=0;
 sunroof=0;
 rear_viper=0;
 rain_sensing_viper=0;
 alloy_wheel=0;
 roof_rail=0;
 plamp=0;
 fog_light=0;
 moonroof=0;
 autoheadlamp=0;
 steelrims=0;
 rearspoiler=0;
chromegrill=0;
}
istream& operator>>(istream &i,Exterior &c)
{
	cout<<"Enter Exterior Specifications\n";
	cout<<"KEYLESS ENTER\t1.Yes\t0.No : ";
	i>>c.keyless_entr;
	cout<<endl;
	
	cout<<"SUN ROOF\t1.Yes\t0.No : ";
	i>>c.sunroof;
	cout<<endl;
	
	cout<<"REAR VIPER\t1.Yes\t0.No : ";
	i>>c.rear_viper;
	cout<<endl;
	
	cout<<"RAIN SENSING VIPER\t1.Yes\t0.No : ";
	i>>c.rain_sensing_viper;
	cout<<endl;
	
	cout<<"ALLOY WHEEL\t1.Yes\t0.No : ";
	i>>c.alloy_wheel;
	cout<<endl;
	
	cout<<"ROOF RAIL\t1.Yes\t0.No : ";
	i>>c.roof_rail;
	cout<<endl;
	
	cout<<"POWER LAMP\t1.Yes\t0.No : ";
	i>>c.plamp;
	cout<<endl;
	
	cout<<"FOG LIGHT\t1.Yes\t0.No : ";
	i>>c.fog_light;
	cout<<endl;
	
	cout<<"MOON ROOF\t1.Yes\t0.No : ";
	i>>c.moonroof;
	cout<<endl;
	
	cout<<"AUTO HEAD LAMP\t1.Yes\t0.No : ";
	i>>c.autoheadlamp;
	cout<<endl;
	
	cout<<"STEEL RIMS\t1.Yes\t0.No : ";
	i>>c.steelrims;
	cout<<endl;
	
	cout<<"REAR SPOILER\t1.Yes\t0.No : ";
	i>>c.rearspoiler;
	cout<<endl;
	
	cout<<"CHROME GRILL\t1.Yes\t0.No : ";
	i>>c.chromegrill;
	cout<<endl;
	return i;
}	    
ostream& operator<<(ostream &o,Exterior &c)
{
	o<<".....Exterior Specification.......\n";
	o<<"Specification\t\tStatus";
	
	o<<"keyless enter\t\t"<<c.keyless_entr;
	o<<endl;
	

	o<<"sunroof\t\t"<<c.sunroof;
	o<<endl;
	
	
	o<<"rear viper\t\t"<<c.rear_viper;
	o<<endl;
	
	
	o<<"rain sensing viper\t\t"<<c.rain_sensing_viper;
	o<<endl;
	
	
	o<<"alloy wheel\t"<<c.alloy_wheel;
	o<<endl;
	
	o<<"roof rail\t\t"<<c.roof_rail;
	o<<endl;
	

	o<<"power lamp\t\t"<<c.plamp ;
	o<<endl;
	
	
	o<<"fog light\t\t"<<c.fog_light;
	o<<endl;
	
	
	o<<"moon roof\t\t"<<c.moonroof;
	o<<endl;
	
	
	o<<"auto head lamp\t"<<c.autoheadlamp;
	o<<endl;
	
	
	o<<"steel rims\t\t"<<c.steelrims;
	o<<endl;
	

	o<<"rear spoiler\t\t"<<c.rearspoiler;
	o<<endl;
	
	
	o<<"chrome grill\t\t"<<c.chromegrill;
	o<<endl;
	return o;
}
#endif

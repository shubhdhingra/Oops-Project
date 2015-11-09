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
			void Setvalue();
			void output();
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
void Exterior::Setvalue()
{
	cout<<"Enter Exterior Specifications\n";
	cout<<"KEYLESS ENTER\t1.Yes\t0.No : ";
	cin>>keyless_entr;
	cout<<endl;
	
	cout<<"SUN ROOF\t1.Yes\t0.No : ";
	cin>>sunroof;
	cout<<endl;
	
	cout<<"REAR VIPER\t1.Yes\t0.No : ";
	cin>>rear_viper;
	cout<<endl;
	
	cout<<"RAIN SENSING VIPER\t1.Yes\t0.No : ";
	cin>>rain_sensing_viper;
	cout<<endl;
	
	cout<<"ALLOY WHEEL\t1.Yes\t0.No : ";
	cin>>alloy_wheel;
	cout<<endl;
	
	cout<<"ROOF RAIL\t1.Yes\t0.No : ";
	cin>>roof_rail;
	cout<<endl;
	
	cout<<"POWER LAMP\t1.Yes\t0.No : ";
	cin>>plamp;
	cout<<endl;
	
	cout<<"FOG LIGHT\t1.Yes\t0.No : ";
	cin>>fog_light;
	cout<<endl;
	
	cout<<"MOON ROOF\t1.Yes\t0.No : ";
	cin>>moonroof;
	cout<<endl;
	
	cout<<"AUTO HEAD LAMP\t1.Yes\t0.No : ";
	cin>>autoheadlamp;
	cout<<endl;
	
	cout<<"STEEL RIMS\t1.Yes\t0.No : ";
	cin>>steelrims;
	cout<<endl;
	
	cout<<"REAR SPOILER\t1.Yes\t0.No : ";
	cin>>rearspoiler;
	cout<<endl;
	
	cout<<"CHROME GRILL\t1.Yes\t0.No : ";
	cin>>chromegrill;
	cout<<endl;
}
void Exterior::output()
{
	cout<<".....Exterior Specification.......\n";
	cout<<"Specification\t\tStatus";
	
	cout<<"keyless enter\t\t"<<keyless_entr;
	cout<<endl;
	

	cout<<"sunroof\t\t"<<sunroof;
	cout<<endl;
	
	
	cout<<"rear viper\t\t"<<rear_viper;
	cout<<endl;
	
	
	cout<<"rain sensing viper\t\t"<<rain_sensing_viper;
	cout<<endl;
	
	
	cout<<"alloy wheel\t"<<alloy_wheel;
	cout<<endl;
	
	cout<<"roof rail\t\t"<<roof_rail;
	cout<<endl;
	

	cout<<"power lamp\t\t"<<plamp ;
	cout<<endl;
	
	
	cout<<"fog light\t\t"<<fog_light;
	cout<<endl;
	
	
	cout<<"moon roof\t\t"<<moonroof;
	cout<<endl;
	
	
	cout<<"auto head lamp\t"<<autoheadlamp;
	cout<<endl;
	
	
	cout<<"steel rims\t\t"<<steelrims;
	cout<<endl;
	

	cout<<"rear spoiler\t\t"<<rearspoiler;
	cout<<endl;
	
	
	cout<<"chrome grill\t\t"<<chromegrill;
	cout<<endl;
	
	
}
#endif

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
#endif

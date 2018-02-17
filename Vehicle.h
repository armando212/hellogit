#include <isostream>
#ifndef VEHICLE_H
#define VEHICLE_H

Class Vehicle
{
	private:
		String chassisNum;
		float maxspeed;
		
	public:
		Vehicle();
		Vehicle(float);
		void set chassisNum(string);
		string getchassisNum();
		
		// other methods	
}
#endif

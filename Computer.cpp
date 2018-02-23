#include <iostream>
#include "Computer.h" //(user defined file)

Computer::Computer()
{
	brandName="";
	totalRam=0;
}

void Computer::setBrandName (string brand)
{
	brandName = brand;
}

string Computer::getBrandName()
{
	return brandName;
}

void Computer::setTotalRam (int ram)
{
	totalRam = ram;
}

int Computer::getTotalRam()
{
	return totalRam;
}

//other methods	
	

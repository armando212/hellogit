#include <iostream>
#include <string>
using namespace std;
#ifndef COMPUTER_H
#define COMPUTER_H

class Computer
{
	private:
		string brandName;
		int totalRam;
		
	public:
		Computer();
		
		void setBrandName(string);
		string getBrandName();
		
		void setTotalRam(int);
		int getTotalRam();
		
		// other methods	
};
#endif

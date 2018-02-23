#include <iostream>
#include <string>
#ifndef COMPUTER_H
#define COMPUTER_H

class Computer
{
	private:
		std::string brandName;
		int totalRam;
		
	public:
		Computer();
		
		void setBrandName(std::string);
		std::string getBrandName();
		
		void setTotalRam(int);
		int getTotalRam();
		
		// other methods	
};
#endif

#include <iostream>
#ifndef COMPUTER_H
#define COMPUTER_H

Class Computer
{
	private:
		String brandName;
		int totalRam;
		
	public:
		Computer();
		
		void setBrandName(string);
		string getBrandName();
		
		void setTotalRam(int);
		int getTotalRam();
		
		// other methods	
}
#endif

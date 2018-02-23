#include <iostream>
#include "Computer.h"

int main()
{
	Computer Dell("Dell", 8);
	cout<<"Brand Name: "<<Dell.getBrandName()<<endl;
	cout<<"Total Ram: "<< Dell.getTotalRam()<<endl;
	return 0;
}

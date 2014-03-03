/* Test Program for houseType */

#include <iostream>

#include "houseType.h"
int main()
{
	houseType myHouse;
	
	myHouse.updateHouse("Style", 4, 2, 2, 3000, 100000, 400000.5, 10.0);
	
	std::string s = myHouse.toString();
	int i = myHouse.getSize();
	std::cout << s;
	
	return 0;
}
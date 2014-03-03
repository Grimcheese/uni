/*
EXE 15 page 113
*/


#include <iostream>

using namespace std;

int main()
{
	const int POUNDS = 2205;
	float numOfBags, bag;
	
	cout << "Please input weight of bags of rice: ";
	cin >> bag;
	cout << endl;
	
	numOfBags = POUNDS / bag;
	
	cout << "Number of bags to make a ton: " << numOfBags << endl;
	
	return 0;
}
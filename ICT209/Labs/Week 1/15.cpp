/*
EXE 15 on page 111
*/

#include <iostream>

using namespace std;

int main()
{
	int hours, minutes, seconds;
	
	cout << "Please enter time: (hh mm ss)";
	cin >> hours >> minutes >> seconds;
	cout << endl;
	
	int total = hours * 3600 + minutes * 60 + seconds;
	
	cout << "Total elapsed time in seconds is: " << total << endl;
	
	return 0;
}
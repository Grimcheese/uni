#include <iostream>
#include <sstream>
#include <string>


using namespace std;

int main()
{
	string s;
	
	// string stream object
	stringstream ss;
	
	ss << "Blah: " << 5;
	cout << ss.str();
	
	return 0;
}
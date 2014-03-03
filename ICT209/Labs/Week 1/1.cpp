// Week 1 Exercises

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int SECRET = 14;
	const float RATE = 12.50;
	
	cout << "********************************" << endl;
	cout << "*   Programming Assignment 1   *" << endl;
	cout << "*   Computer Programming I     *" << endl;
	cout << "*     Author: Alby             *" << endl;
	cout << "*    Due Date: Thursday Jan 24 *" << endl;
	cout << "********************************" << endl;
	
	int num1, num2;
	string name;
	float hoursWorked, wages;
	
	cin >> num1 >> num2;
	
	cout << "num1 is: " << num1 << " and num2 is: " << num2 << endl;
	
	int newNum = (num1 * 2) + num2;
	cout << "newNum is: " << newNum << endl;
	
	newNum+= SECRET;
	cout << "Secret number is: " << newNum << endl;
	
	cout << "Enter last name: ";
	cin >> name;
	cout << endl;
	
	cout << "Enter value between 0 and 70: ";
	cin >> hoursWorked;
	cout << endl;
	
	wages = RATE * hoursWorked;
	
	cout << "Name: " << name << endl;
	cout << "Pay rate: " << RATE << endl;
	cout << "Hours worked: " << hoursWorked << endl << endl;
	cout << "Salary: " << wages << endl;
	
	
	return 0;
}
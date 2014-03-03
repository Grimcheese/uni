#include <string>
#include <sstream>
#include <iostream>

#include "houseType.h"


using namespace std;

houseType::houseType()
{
	updateHouse("", 0, 0, 0, 0, 0, 0.0, 0.0);
}

houseType::houseType(string s, int a, int b, int c, int d, int e, double f, double g)
{
	updateHouse(s, a, b, c, d, e, f, g);
}

bool houseType::updateHouse(string s, int a, int b, int c, int d, int e, double f, double g)
{
	style = s;
	numOfBedrooms = a;
	numOfBathrooms = b;
	numOfCarsGarage = c;
	yearBuilt = d;
	finishedSquareFootage = e;
	price = f;
	tax = g;
	
	// No error checking is implemented yet
	return true;
}

string houseType::toString()
{
	// string stream object to append ints to string being returned
	stringstream ss;
	
	// Converts all the variable members into a string which can be returned 
	// to the client
	ss << "Style is: " << style << endl << "Number of bedrooms: " 
		<< numOfBedrooms << endl << "Number of bathrooms: " << numOfBathrooms 
		<< endl << "Number of cars: " << numOfCarsGarage << endl << "Year built: "
		<< yearBuilt << endl << "House size: " << finishedSquareFootage << endl <<
		"Price: " << price << endl << "Tax: " << tax << endl;
	
	return ss.str();
}

bool houseType::setCars(int a)
{
	numOfCarsGarage = a;
	
	// No error checking is implemented yet
	return true;
}

string houseType::getStyle() const
{
	return style;
}

int houseType::getBedrooms() const
{
	return numOfBedrooms;
}

int houseType::getBathrooms() const
{
	return numOfBathrooms;
}

int houseType::getCars() const
{
	return numOfCarsGarage;
}

int houseType::getYear() const
{
	return yearBuilt;
}

int houseType::getSize() const
{
	return finishedSquareFootage;
}

double houseType::getPrice() const
{
	return price;
}

double houseType::getTax() const
{
	return tax;
}
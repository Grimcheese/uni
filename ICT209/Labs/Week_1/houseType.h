/*
	houseType.h
	A class that defines features of a house
	This is the specification file
*/

class houseType
{
	public:
		
		bool updateHouse(std::string s, int a, int b, int c, int d, int e, double f, double g);
		// Allows client to update all the member variables at the same time
		// Returns a bool value to show if the values passed are valid or not
		// If false is returned no values are updated
		
		std::string toString();
		// Returns the value of houseType as a string
		
		bool setCars(int a);
		// Allows client to only modify the numOfCarsGarage value by itself
		// Returns a bool value
		// If false is returned the member is not updated
		
		// Basic accessor methods that do not allow any values to be changed
		// The desired member is returned
		std::string getStyle() const;
		int getBedrooms() const;
		int getBathrooms() const;
		int getCars() const;
		int getYear() const;
		int getSize() const;
		double getPrice() const;
		double getTax() const;
		
		houseType();
		// Default constructor, sets everything to 0 or ""
		
		houseType(std::string s, int a, int b, int c, int d, int e, double f, double g);
		// Constructor to specify what values the members should 
		// start with
		
		
	private: 
		std::string style;
		int numOfBedrooms;
		int numOfBathrooms;
		int numOfCarsGarage;
		int yearBuilt;
		int finishedSquareFootage;
		double price;
		double tax;
};
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class invalidMonth
{
public:

	void setMonth(int); // mutator functions // 
	void setYear(int);

	int getYear();		// accessor function // 
	string getMonth();

	// constructor for month  // 

	invalidMonth();

private:
	string month;
	int monthNum;
	int year;
};

class invalidDay 
{
public:
	void setDay(int); // mutator function // 

	int getDay();      // accessor function // 

	// constructor  for the day // 

	invalidDay();

private:
	int day;
};

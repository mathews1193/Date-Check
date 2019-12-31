#include "check.h"

int main()
{
	int m;
	int d;
	int y;

	invalidMonth month; // object for the month // 
	invalidMonth year; // object for the year // 
	invalidDay day; // object for the day // 


	cout << setw(45) << "******* Main Menu ******" << endl << endl;

	cout << "Please enter the date of birth in the following format: mm/dd/yyyy. (no dashes)" << endl << endl;
	cin >> m; // user input for the month // 
	cin >> d; // user input for the day // 
	cin >> y; // user input for the year // 

	cout << endl;

	month.setMonth(m); // call to set the month // 
	day.setDay(d); // call to set the day // 
	year.setYear(y); // call to set the year // 

	cout << month.getMonth() << " " << day.getDay() << ", " << year.getYear() << endl; // display the month, day , and year // 


	system("Pause");

	return 0;
	
}

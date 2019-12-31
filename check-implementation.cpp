#include "check.h"

// implemenation file // 

void invalidMonth::setMonth(int m) // function for setting the month // 
{
	try {
		if (m > 12) // check for the months of the year // 
		{
			throw 13; // throw an exception for the invalid entry // 
		}
	}catch (int x) // catches the exception of days // 
	{
		cout << "Months of a year cannot excess 12. Error number: " << x << endl;
	}
	monthNum = m;
}

void invalidDay::setDay (int d)
{
	try {
		if (d > 31) // check for the days of the month // 
		{
			throw 32; // error number thrown // 
		}
		}catch (int x)  // catches the exception of days // 
			{
				cout << "Days of a month cannot excess 31. Error number: "<< x << endl;
			}
		day = d;
}

void invalidMonth::setYear(int y) 
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) // checks for leap year // 
	{
		cout << "This is a leap year! February has 29 days instead of 28." << endl << endl;
		year = y;
	}
	else 
	{
		year = y; // set the year //
	}
}

int invalidMonth::getYear() 
{
	return year;
}

int invalidDay::getDay()
{
	return day;
}

string invalidMonth::getMonth()
{
	switch (monthNum) // stsatement for obtaining the month using the number from main // 
	{
	case 1: month = "January";
		break;
	case 2: month = "February";
		break;
	case 3: month = "March";
		break;
	case 4: month = "April";
		break;
	case 5: month = "May";
		break;
	case 6: month = "June";
		break;
	case 7: month = "July";
		break;
	case 8: month = "August";
		break;
	case 9: month = "September";
		break;
	case 10: month = "October";
		break;
	case 11: month = "November";
		break;
	case 12: month = "December";
		break;
	default: month = "Invalid month";
		break;
	}
	return month;
}

invalidDay::invalidDay() // constructor for day // 
{
	day = 0;
}

invalidMonth::invalidMonth() // constructor for month and year // 
{
	month = " ";
	year = 0;
	monthNum = 0; 
}

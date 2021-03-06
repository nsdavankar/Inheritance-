/**************************************************************************
* AUTHOR        : Nisha Davankar
* Student ID    : 1045735
* Assignment    : 2
* CLASS         : CS1C
* SECTION       : MW 5pm
* DUE DATE      : 01/30/19
**************************************************************************/

#include "Header.h"

/**************************************************************************
* Date::Date()
* -------------------------------------------------------------------------
* This is the default Date constructor
* -------------------------------------------------------------------------
*
**************************************************************************/
Date::Date()
{}

/**************************************************************************
* Date::Date()
* -------------------------------------------------------------------------
* This is the non default Date constructor
* -------------------------------------------------------------------------
*
**************************************************************************/
Date::Date(int intmonth, int intdate, int intyear): month(intmonth), 
	  date(intdate) ,year(intyear)
{}

/**************************************************************************
* EDate::~Date()
* -------------------------------------------------------------------------
* This is the class destructor
* -------------------------------------------------------------------------
*
**************************************************************************/
Date::~Date()
{}

/**************************************************************************
* void Date::changeDate()
* -------------------------------------------------------------------------
* Method changes the Hire date
* -------------------------------------------------------------------------
*
**************************************************************************/
void Date::changeDate()
{
	cout << "\nEnter month, date and year" << endl;
	cin >> month;
	cin >> date;
	cin >> year; 
	cin.ignore(1000, '\n');
}

/**************************************************************************
* void Date::printDate()
* -------------------------------------------------------------------------
* Method prints the Date information
* -------------------------------------------------------------------------
*
**************************************************************************/
void Date::printDate() const
{
	cout << month << "/" << date << "/" << year;
}

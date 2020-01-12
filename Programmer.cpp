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
* Programmer::Programmer()
* -------------------------------------------------------------------------
* This is the default Employee constructor
* -------------------------------------------------------------------------
*
**************************************************************************/
Programmer::Programmer()
{}

/**************************************************************************
* Programmer::Programmer()
* -------------------------------------------------------------------------
* This is the non default Employee constructor
* -------------------------------------------------------------------------
*
**************************************************************************/
Programmer::Programmer(string stringEmployeeName, int intEmployeeId,
	long long int intPhoneNumber, int intAge, char charGender,
	string stringJobTitle, int intSalary, int intMonth, int intDate, 
	int intYear, int intDeptNum,string stringSupName, int intSalaryPer, 
	bool boolCIden, bool boolJIden): 
	Employee(stringEmployeeName, intEmployeeId, intPhoneNumber, intAge, 
	charGender, stringJobTitle, intSalary, intMonth, intDate, intYear)
{
	deptNum = intDeptNum;
	supName = stringSupName;
	salaryPer = intSalaryPer;
	cIden = boolCIden;
	jIden = boolJIden;
}

/**************************************************************************
* Programmer::~Programmer()
* -------------------------------------------------------------------------
* This is the class destructor
* -------------------------------------------------------------------------
*
**************************************************************************/
Programmer::~Programmer()
{}

/**************************************************************************
* Programmer::progChangeDeptNum()
* -------------------------------------------------------------------------
* Method changes the Department number
* -------------------------------------------------------------------------
*
**************************************************************************/
void Programmer::progChangeDeptNum()
{
	cout << "\nEnter Department: ";
	cin >> deptNum;
}

/**************************************************************************
* Programmer::progChangesupName()
* -------------------------------------------------------------------------
* Method changes the Supervisors name
* -------------------------------------------------------------------------
*
**************************************************************************/
void Programmer::progChangesupName()
{
	cout << "\nEnter Supervisors Name: ";
	cin.ignore(1000, '\n');
	getline(cin, supName);
}

/**************************************************************************
* Programmer::progChangeSalaryPer()
* -------------------------------------------------------------------------
* Method changes the salary percentage
* -------------------------------------------------------------------------
*
**************************************************************************/
void Programmer::progChangeSalaryPer()
{
	cout << "\nEnter Raise %: ";
	cin >> salaryPer;
	cin.ignore(1000, '\n');
}

/**************************************************************************
* Programmer::progChangecIden()
* -------------------------------------------------------------------------
* Method changes the bool experience in C++
* -------------------------------------------------------------------------
*
**************************************************************************/
bool Programmer::progChangecIden()
{
	string boolInput;
	bool cprog = false;
	cout << "\nC++ Knowledge: ";
	cin >> boolInput;

	if (boolInput == "Yes")
	{
		cprog = true;
	}
	else if (boolInput == "No")
	{
		cprog = false;
	}
	cIden = cprog;
	return cprog;
}

/**************************************************************************
* Programmer::progChangejIden()
* -------------------------------------------------------------------------
* Method changes the bool experience in Java
* -------------------------------------------------------------------------
*
**************************************************************************/
bool Programmer::progChangejIden()
{
	string boolInput;
	bool jprog = false;
	cout << "\nJava Knowledge";
	cin >> boolInput;

	if (boolInput == "Yes")
	{
		jprog = true;
	}
	else if (boolInput == "No")
	{
		jprog = false;
	}

	jIden = jprog;
	return jprog;
}

/**************************************************************************
* Programmer::printEmployeeinfo()
* -------------------------------------------------------------------------
* Method prints employee information using the Employee class
* -------------------------------------------------------------------------
*
**************************************************************************/
void Programmer::printEmployeeinfo()
{
	Employee::printEmployee();
}

/**************************************************************************
* Programmer::progPrintProgrammer()
* -------------------------------------------------------------------------
* Method prints Programmer information
* -------------------------------------------------------------------------
*
**************************************************************************/
void Programmer::progPrintProgrammer()
{
	Employee::printEmployeeName();
	cout << left;
	cout << setw(15) << deptNum << setw(15) << supName << setw(5) << salaryPer 
		 << setw(5);
	if (cIden == true)
	{
		cout << "Yes" << "\t";
	}
	else 
	{
		cout << "No" << "\t";
	}

	if (jIden == true)
	{
		cout << setw(5) <<  "Yes";
	}
	else
	{
		cout << setw(5) << "No";
	}
	cout << right;
}
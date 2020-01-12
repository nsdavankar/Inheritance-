/**************************************************************************
* AUTHOR        : Nisha Davankar
* Student ID    : 1045735
* Assignment    : 2
* CLASS         : CS1C
* SECTION       : MW 5pm
* DUE DATE      : 01/30/19
**************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#ifndef HEADER_H_
#define HEADER_H_

class Date								//Date class
{
public:
	Date();
	Date(int intmonth, int intdate, int intyear);
	~Date();
	void changeDate();
	void printDate()const;

private:
	/*****************************************************
	PRIVATE MEMBERS
	*****************************************************/
	int month;
	int date;
	int year;
};

class Employee							//Employee class
{
public:
	/*****************************************************
	CONSTRUCTORS & DESTRUCTOR
	*****************************************************/
	Employee(string stringEmployeeName, int intEmployeeId, 
			 long long int  intPhoneNumber, int intaAge, 
			 char charGender, string stringJobTitle, int intSalary, 
			 int intMonth, int intDate, int intYear);

	/*****************************************************
	FUNCTIONS
	*****************************************************/
	Employee();
	~Employee();
	void changeEmployeeName();
	void changeEmployeeId();
	void changeEmployeePhoneNumber();
	void changeEmployeeAge();
	void changeEmployeeGender();
	void changeEmployeeJobTitle();
	void changeEmployeeSalary();
	void changeEmployeeHireDate();
	void printEmployee()const;
	void printEmployeeName();

private:
	/*****************************************************
	PRIVATE MEMBERS
	*****************************************************/
	string employeeName;
	int employeeId;
	long long int phoneNumber;
	int age;
	char gender;
	string jobTitle;
	int salary;
	Date hireDate;
};

class Programmer : public Employee		//Programmer class, inhertis
										//public members of Employee
{
public:
	Programmer();
	Programmer(string stringEmployeeName, int intEmployeeId,
	long long int intPhoneNumber, int intAge, char charGender, 
	string stringJobTitle, int intSalary, int intMonth, int intDate, 
	int intYear, int intDeptNum, string stringSupName, int intSalaryPer, 
	bool boolCIden, bool boolJIden);
	~Programmer();
	/*****************************************************
	FUNCTIONS
	*****************************************************/
	void progChangeDeptNum();
	void progChangesupName();
	void progChangeSalaryPer();
	bool progChangecIden();
	bool progChangejIden();
	void printEmployeeinfo();
	void progPrintProgrammer();

private:
	/*****************************************************
	PRIVATE MEMBERS
	*****************************************************/
	int deptNum;
	string supName;
	int salaryPer;
	bool cIden;
	bool jIden;
};

class Architect : public Employee		//Architect class, inhertis
										//public members of Employee
{
public:
	Architect();
	Architect(string stringEmployeeName, int intEmployeeId,
		long long int intPhoneNumber, int intAge, char charGender,
		string stringJobTitle, int intSalary, int intMonth, int intDate,
		int intYear, int intDeptNum, string stringSupName, int intSalaryPer,
		int intExperYear);
	~Architect();
	/*****************************************************
	FUNCTIONS
	*****************************************************/
	void archChangeDeptNum();
	void archChangesupName();
	void archChangeSalaryPer();
	void archChangeYears();
	void printEmployeeinfo();
	void archPrintArchitect();

private:
	/*****************************************************
	PRIVATE MEMBERS
	*****************************************************/
	int aDeptNum;
	string aSupName;
	int aSalaryPer;
	int aExperYear;
};


#endif /* HEADER_H_*/

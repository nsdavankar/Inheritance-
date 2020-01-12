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
* Employee Inheritance
* -------------------------------------------------------------------------
* This program has an Employee class that has name, ID, phone number, gender,
*age, job title, salary, and date as private data member. The Employee
*class has public members to change the private data members. There are 
*also two inherited classes, Programmer and Architect that can access the 
*public members of Employee and have some private data members such as 
*department number, supervisor name and salary percentage.

* --------------------------------------------------------------------------
* INPUT
*		
*
* OUTPUT
*
***************************************************************************/

int main()

{
	Employee defEmployee;
	//PROCESSING- non default constructor
	Employee nondefEmployee("Tom Brady", 12345, 9495551234, 40, 'M', 
		"Quarterback", 100000, 8, 31, 2014);

	nondefEmployee.printEmployee();
	//PROCESSING- changing attributes of the Employee class
	nondefEmployee.changeEmployeeName();
	nondefEmployee.changeEmployeeId();
	nondefEmployee.changeEmployeePhoneNumber();
	nondefEmployee.changeEmployeeAge();
	nondefEmployee.changeEmployeeJobTitle();
	nondefEmployee.changeEmployeeSalary();
	nondefEmployee.changeEmployeeHireDate();

	//OUTPUT 
	nondefEmployee.printEmployee();

	nondefEmployee.changeEmployeeName();
	nondefEmployee.changeEmployeeId();
	nondefEmployee.changeEmployeePhoneNumber();
	nondefEmployee.changeEmployeeAge();
	nondefEmployee.changeEmployeeGender();
	nondefEmployee.changeEmployeeJobTitle();
	nondefEmployee.changeEmployeeSalary();
	nondefEmployee.changeEmployeeHireDate();
	
	//OUTPUT 
	nondefEmployee.printEmployee();

	nondefEmployee.changeEmployeeName();
	nondefEmployee.changeEmployeeId();
	nondefEmployee.changeEmployeePhoneNumber();
	nondefEmployee.changeEmployeeAge();
	nondefEmployee.changeEmployeeGender();
	nondefEmployee.changeEmployeeJobTitle();
	nondefEmployee.changeEmployeeSalary();
	nondefEmployee.changeEmployeeHireDate();

	//OUTPUT 
	nondefEmployee.printEmployee();
	
	cout << "\nProgrammers";

	Programmer defProgrammer;
	//PROCESSING- non default constructor
	Programmer nondefProgrammer("Sam Software", 54321, 8191234567, 21, 
		'M', "Programmer", 223000, 12, 24, 2011, 5432122, "Joe Boss", 4, 
		 true, false);

	//PROCESSING- changing attributes of the Programmer class
	defProgrammer.changeEmployeeName();
	defProgrammer.changeEmployeeId();
	defProgrammer.changeEmployeePhoneNumber();
	defProgrammer.changeEmployeeAge();
	defProgrammer.changeEmployeeGender();
	defProgrammer.changeEmployeeJobTitle();
	defProgrammer.changeEmployeeSalary();
	defProgrammer.changeEmployeeHireDate();
	defProgrammer.progChangeDeptNum();
	defProgrammer.progChangesupName();
	defProgrammer.progChangeSalaryPer();
	defProgrammer.progChangecIden();
	defProgrammer.progChangejIden();

	//OUTPUT 
	cout << "\nProgrammers";
	nondefProgrammer.printEmployeeinfo();
	defProgrammer.printEmployeeinfo();
	nondefProgrammer.progPrintProgrammer();
	defProgrammer.progPrintProgrammer();

	cin.ignore(1000, '\n');

	cout << "\nSoftware Architechs";

	Architect defArchitect;
	//PROCESSING- non default constructor
	Architect nondefArchitect("Alex Arch", 88888, 8191234444, 31, 'M', 
		"Architech", 323000, 12,24,2009, 1434222, "Big Boss", 5, 4);
	
	//PROCESSING- changing attributes of the Architect class
	defArchitect.changeEmployeeName();
	defArchitect.changeEmployeeId();
	defArchitect.changeEmployeePhoneNumber();
	defArchitect.changeEmployeeAge();
	defArchitect.changeEmployeeGender();
	defArchitect.changeEmployeeJobTitle();
	defArchitect.changeEmployeeSalary();
	defArchitect.changeEmployeeHireDate();
	defArchitect.archChangeDeptNum();
	defArchitect.archChangesupName();
	defArchitect.archChangeSalaryPer();
	defArchitect.archChangeYears();
	
	//OUTPUT 
	cout << "\nSoftware Architechs";
	nondefArchitect.printEmployeeinfo();
	defArchitect.printEmployeeinfo();
	nondefArchitect.archPrintArchitect();
	defArchitect.archPrintArchitect();

	cout << endl;

	return 0;
}


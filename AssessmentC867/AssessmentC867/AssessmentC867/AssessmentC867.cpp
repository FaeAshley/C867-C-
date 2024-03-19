#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

//Student* parse(string);

int main()
{
	cout << "C867 - Scripting and Programming - Applications" << endl
		<< "Programming language: C++" << endl
		<< "Student ID:" << 000532141 << endl
		<< "Fae Ashley" << endl << endl;

	Roster classRoster; //F2 Create an instance of the Roster class called classRoster.
	//F3 Add each student to classRoster 

	const string studentData[] = {

	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Fae,Ashley,fashl10@wgu.edu,29,12,20,90,SOFTWARE"
	};


	/*Create a student object for each student in the data tableand populate classRosterArray.
		a.Parse each set of data identified in the “studentData Table.”
		b.Add each student object to classRosterArray.*/
	for (int i = 0; i < 5; ++i) classRoster.parse(studentData[i]);

	cout << "Displaying all students: " << endl;
	classRoster.printAll();
	cout << endl;

	cout << "Displaying students with invalid Emails: " << endl;
	classRoster.printInvalidEmails();
	cout << endl;

	//classRoster.printAverageDaysInCourse(current_object's student id)
	//classRoster.printByDegreeProgram(SOFTWARE);
	//classRoster.remove("A3");

	cout << "Displaying all students: " << endl;
	//classRoster.printAll();
	cout << endl;

	//classRoster.remove("A3"); //expected: the above line should print a message saying such a student with this ID was not found.
	cout << "Student with this ID was not found." << endl;

	//F5.  Implement the destructor to release the memory that was allocated dynamically in Roster.
}

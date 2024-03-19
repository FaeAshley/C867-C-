#include <iostream>
#include <string>
#include <sstream>	
#include <iomanip>
#include "roster.h"

void Roster::parse(string studentData) {
	size_t rhs = studentData.find(",");
	string studentid = studentData.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string firstname = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string lastname = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string email = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int age = stoi(studentData.substr(lhs, rhs - lhs));
	
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int coursedays1 = stoi(studentData.substr(lhs, rhs - lhs));
	
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int coursedays2 = stoi(studentData.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int coursedays3 = stoi(studentData.substr(lhs, rhs - lhs)); 
	
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string strdp = studentData.substr(lhs, rhs - lhs);

	DegreeProgram dp = DegreeProgram::SOFTWARE;
	if (strdp == "SECURITY") {
		dp = DegreeProgram::SECURITY;
	}
	else if (strdp == "NETWORK") {
		dp = DegreeProgram::NETWORK;
	};
	
	Roster::add (studentid, firstname, lastname, email, age, coursedays1, coursedays2, coursedays3, dp);

}

void Roster::add(string studentID,
	string firstName,
	string lastName,
	string email,
	int age,
	int daysInCourse1,
	int daysInCourse2,
	int daysInCourse3,
	DegreeProgram degreeProgram)

{//days back into an array for constructor
	int parr[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	//make new student object
	classRosterArray[++i] = new Student(studentID, firstName, lastName, email, age, parr, degreeProgram); 
} 

void Roster::remove(string studentID) {//E3b. removes students from the roster by student ID. If 
	//the student ID does not exist, the function prints an error message indicating that the student 
	//was not found.
}

void Roster::printAll() {
	Student::printHeader();
	for (int i = 0; i < 5; ++i) {
		 classRosterArray[i]->Student::print();

	}
}

void Roster::printAverageDaysInCourse(string studentID) { //that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
	//for (int i = 0; i < 5; ++i) {
	//	if (classRosterArray[i]->GetStudentID() == studentID)
	//	{
	//		cout << classRosterArray[i]->GetStudentID() << ": ";
	//		cout << classRosterArray[i]->GetDaysInCourse()[0]
	//			+ classRosterArray[i]->GetDaysInCourse()[1]
	//			+ classRosterArray[i]->GetDaysInCourse()[2] / 3.0 << endl;
	//	}
	//}
	//cout << endl;
}

void Roster::printInvalidEmails() {//verifies student email addresses and displays all invalid email addresses to the user.
	bool any = false;
	for (int i = 0; i < 5; i++)
	{
		string email = (classRosterArray[i]->GetEmail());
		if ((email.find('@') == string::npos )|| (email.find(' ') != string::npos )||( email.find('.') == string::npos))
		{
			any = true;
			cout << email << ": " << classRosterArray[i]->GetFirstName() << endl;

		}
	}
	if (!any) cout << "NONE" << endl;
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {}

Roster::~Roster() {
//	for (int i = 0; i < 5; ++i) {
//		delete classRosterArray[i];
//	}
}
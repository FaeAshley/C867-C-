#include <iostream>
#include <string>
#include "student.h"


//mutators/setters
void Student::SetStudentID(string studentID) {
	this->studentID = studentID;
}
void Student::SetFirstName(string firstName) {
	this->firstName = firstName;
}
void Student::SetLastName(string lastName) {
	this->lastName = lastName;
}
void Student::SetEmail(string email) {
	this->email = email;
}
void Student::SetAge(int age) {
	this->age = age;
}
void Student::SetDaysInCourse(int daysInCourse[]) {
	for (int i = 0; i < daysInCourseArraySize; ++i) this->daysInCourse[i] = daysInCourse[i];
}
void Student::SetDegreeProgram(DegreeProgram degreeprogram) {
	this->degreeProgram = degreeProgram;
}



//accessors/getters
string Student::GetStudentID() {
	return this->studentID;
}
string Student::GetFirstName() {
	return this->firstName;
}
string Student::GetLastName() {
	return this->lastName;
}
string Student::GetEmail() {
	return this->email;
}
int Student::GetAge() {
	return this->age;
}
int* Student::GetDaysInCourse() {
	return this->daysInCourse;
}
DegreeProgram Student::GetDegreeProgram() {
	return this->degreeProgram;
}


//constructors
Student::Student() {
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->email = "";
	this->age = 0;
	this->daysInCourse = new int[3];
	for (int i = 0; i < 3; ++i) this->daysInCourse[i] = 0; //sets default days to 0
	this->degreeProgram = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degreeProgram) {
	this->studentID = studentID; //take off quotes
	this->firstName = "firstName";
	this->lastName = "lastName";
	this->email = email;
	this->age = age;
	this->daysInCourse = new int[3];
	for (int i = 0; i < 3; ++i) this->daysInCourse[i] = daysInCourse[i];
	this->degreeProgram = degreeProgram;
}

//print functions
void Student::printHeader() {
	cout << "StudentID|FirstName|LastName|Email|Age|Number of Days to complete each Course|Program" << endl;
}

void Student::print() {
	cout << this->GetStudentID() << '\t';
	cout << this->GetFirstName() << '\t';
	cout << this->GetLastName() << '\t';
	cout << this->GetEmail() << '\t';
	cout << this->GetAge() << ',';
	cout << this->GetDaysInCourse()[0] << ',';
	cout << this->GetDaysInCourse()[1] << ',';
	cout << this->GetDaysInCourse()[2] << ';';
	if (this->GetDegreeProgram() == 0) {
		cout << "Security" << endl;
	}
	else if (this->GetDegreeProgram() == 1) {
		cout << "Network" << endl;
	}
	else {
		cout << "Software" << endl;
	}

}

Student::~Student() {} //destructor
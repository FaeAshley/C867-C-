#pragma once
#ifndef student_h
#define student_h
#include "degree.h"


class Student {
private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int* daysInCourse;
	DegreeProgram degreeProgram;

public:
	const static int daysInCourseArraySize = 3;
	//mutators/setters
	void SetStudentID(string studentID);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmail(string email);
	void SetAge(int age);
	void SetDaysInCourse(int daysInCourse[]);
	void SetDegreeProgram(DegreeProgram degreeprogram);


	//accessors/getters
	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmail();
	int GetAge();
	int* GetDaysInCourse();
	DegreeProgram GetDegreeProgram();


	Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degreeProgram); //DegreeProgram degreeProgram
	Student(); //constructor
	~Student(); //destructor
	void print();
	static void printHeader();

};

#endif

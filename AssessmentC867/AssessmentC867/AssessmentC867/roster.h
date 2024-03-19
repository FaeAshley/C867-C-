#pragma once
#ifndef roster_h
#define roster_h
#include <iostream>
#include <string>
#include "student.h"
using namespace std;

class Roster {

public:
	int i = -1;
	const static int studentDataTable = 5;
	Student* classRosterArray[studentDataTable];
	void parse(string studentData);
	void add(string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int daysInCourse1,
		int daysInCourse2,
		int daysInCourse3,
		DegreeProgram degreeProgram);
	void remove(string studentID);
	void printAll(); //E3c
	void printAverageDaysInCourse(string studentID); //E3d
	void printInvalidEmails(); //E3e
	void printByDegreeProgram(DegreeProgram degreeProgram);

	~Roster(); //destructor
};

#endif
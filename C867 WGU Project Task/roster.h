#pragma once
#include "student.h"
#include <iostream>
using namespace std;



class Roster
{

private:
	int lastIndex = -1; 
	const static int numStudents = 5;
	Student* classRosterArray[numStudents];

	
public:

	void parseData (string studentData);
	void add(string studentID,
		string firstName,
		string lastName,
		string emailAddress,
		int age,
		int daysInCourse1,
		int daysInCourse2,
		int daysInCourse3,
		DegreeProgram degreeprogram);

    void printAll(); 
	void printByDegreeProgram(DegreeProgram degreeprogram); 
	void printAverageDaysInCourse(); 
	void remove(string studentID); //find and remove student by student ID.
	void printInvalidEmails(); /* A	valid email should include an at sign ('@') and period ('.') and should not include a space (' ').*/

	~Roster(); 



};

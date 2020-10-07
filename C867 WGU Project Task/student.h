#pragma once
#include "degree.h"
using namespace std;


class Student {  

	 
public:
	

	Student();
	Student(string studID,
		string studfName,
		string studlName,
		string studEmail,
		int studAge,
		int daysIncourse[],
		DegreeProgram degreeProgram);
	~Student();  



	
	string getStudID();
	string getStudfName();
	string getStudlName();
	string getStudEmail();
	int getStudAge();
	int* getdaysIncourse();
	DegreeProgram getDegreeProgram();


	
	void setStudID(string studID);
	void setStudFName(string fName);
	void setStudLName(string lName);
	void setStudEmail(string studEmail);
	void setStudAge(int numAge);
	void setdaysIncourse(int daysIncourse[]);
	void setDegreeProgram(DegreeProgram degreeProgram);


	static void printHeader(); 
	void print(); 

	const static int numDays = 3;
	
private:


	string studID;
	string studfName;
	string studlName;
	string studEmail;
	int studAge;
	int daysIncourse[numDays];
	DegreeProgram degreeprogram; 
	

};


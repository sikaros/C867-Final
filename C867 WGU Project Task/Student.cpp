#include "student.h"

Student::Student() { 

	this->studID = "";
	this->studfName = "";
	this->studlName ="";
	this->studEmail = " ";
	this->studAge = 0;	
	for (int i = 0; i < numDays; i++)
		this->daysIncourse[i] = 0;
	this->degreeprogram = DegreeProgram:: NETWORK;

}

 Student::Student(string studID, string fname, string lname, string email, int age,
	 int daysInCourse[], DegreeProgram degreeprog){
	
	this->studID = studID;
	this->studfName = fname ;
	this->studlName = lname;
	this->studEmail = email;
	this->studAge = age;
	
	for (int i = 0; i < numDays; i++) 
		this->daysIncourse[i]= daysInCourse[i];
	this->degreeprogram = degreeprog;
	

}

Student::~Student(){} 


//Getter functions defined
string Student::getStudID() { return this->studID; }
string Student::getStudfName() { return this->studfName; }
string Student::getStudlName() { return this->studlName; }
string Student::getStudEmail() { return this->studEmail; }
int Student::getStudAge() { return this->studAge; }
int* Student::getdaysIncourse() { return this-> daysIncourse; }
DegreeProgram  Student::getDegreeProgram() { return this-> degreeprogram; }


//Setter functions defined
void  Student::setStudID(string studID) { this-> studID =  studID; }
void  Student::setStudFName(string fname) {  this->studfName = fname; }
void  Student::setStudLName(string lname) {  this->studlName = lname; }
void  Student::setStudAge(int numAge) { this->studAge =numAge; }
void  Student::setStudEmail(string email) {  this->studEmail = email; }
void  Student::setdaysIncourse(int daysIncourse[]) {
	for (int i = 0; i < numDays; i++) this->daysIncourse[i] = daysIncourse[i];
}
void  Student::setDegreeProgram(DegreeProgram degreeprog) { this->degreeprogram = degreeprog; }

void Student::printHeader() { //defined  print header function
	cout << " Display Format: ID|First name|Last name|Email|Age|Days in course| Degree program" << endl;
}


void Student::print() { //print function defined to display student data
	cout << this->getStudID()<< '\t';
	cout << this->getStudfName() << '\t';
	cout << this->getStudlName()<< '\t';
	cout << this->getStudAge()<< '\t';
	cout << this->getStudEmail() << '\t';
	cout << this->getdaysIncourse()[0]<< '\t';
	cout << this->getdaysIncourse()[1]<< '\t';
	cout << this->getdaysIncourse()[2]<< '\t';
	cout << this->getdaysIncourse()[3] << '\t';
	cout << this->getdaysIncourse()[4]<< '\t';
	cout << degreeprogstrings[this->getDegreeProgram()] << '\n'; //the degree program in string form: Enum

}







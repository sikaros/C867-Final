#include "roster.h"

void Roster::parseData(string studentData)
{
	DegreeProgram dp = NETWORK;
	if (studentData.at(2) == 'T') dp = NETWORK;
	else if (studentData.at(2) == 'C') dp = SECURITY;
	else if (studentData.at(2) == 'F') dp = SOFTWARE;

	int right = studentData.find(","); //first substring
	string sID = studentData.substr(0, right);// extract ID

	int left = right + 1; //second substring begin, move past comma
	right = studentData.find(",", left);
	string fname = studentData.substr(left, right - left); // extract first name


	left = right + 1;
	right = studentData.find(",", left);
	string lname = studentData.substr(left, right - left); //extract last name


	left = right + 1;
	right = studentData.find(",", left);
	string email = studentData.substr(left, right - left); //extract email

	left = right + 1;
	right = studentData.find(",", left);
	int age = stoi(studentData.substr(left, right - left)); //extract age

	left = right + 1;
	right = studentData.find(",", left);
	int day1 = stoi(studentData.substr(left, right - left)); //extract day1

	left = right + 1;
	right = studentData.find(",", left);
	int day2 = stoi(studentData.substr(left, right - left)); //extract day2

	left = right + 1;
	right = studentData.find(",", left);
	int day3 = stoi(studentData.substr(left, right - left)); //extract day 3

	left = right + 1;
	right = studentData.find(",", left);
	string degree = studentData.substr(left, right - left); //extract degree

	if (degree[2] == 'T') dp = NETWORK;
	if (degree[2] == 'C') dp = SECURITY;
	if (degree[2] == 'F') dp = SOFTWARE;




	add(sID, fname, lname, email, age, day1, day2, day3, dp);

}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress,
	int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram) {

	int daysArray[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

	classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age, daysArray, degreeprogram);

}

void Roster::printAll() {

	Student::printHeader();
	for (int i = 0; i <= Roster::lastIndex; i++) {

		cout << classRosterArray[i]->getStudID(); cout << '\t';
		cout << classRosterArray[i]->getStudfName(); cout << '\t';
		cout << classRosterArray[i]->getStudlName(); cout << '\t';
		cout << classRosterArray[i]->getStudEmail(); cout << '\t';
		cout << classRosterArray[i]->getStudAge(); cout << '\t';
		cout << classRosterArray[i]->getdaysIncourse()[0]; cout << '\t';
		cout << classRosterArray[i]->getdaysIncourse()[1]; cout << '\t';
		cout << classRosterArray[i]->getdaysIncourse()[2]; cout << '\t';
		cout << degreeprogstrings[classRosterArray[i]->getDegreeProgram()] << endl;


	}

}

void Roster::printByDegreeProgram(DegreeProgram degreeprog) {

	Student::printHeader();

	for (int i = 0; i <= Roster::lastIndex; i++) {
		if (Roster::classRosterArray[i]->getDegreeProgram() == degreeprog) classRosterArray[i]->print();

	}
	cout << endl;
}

void Roster::printInvalidEmails() { //Function prints invalid emails 
	for (int i = 0; i <= lastIndex; ++i) {
		string email = classRosterArray[i]->getStudEmail();
		if ((email.find("@") == string::npos) || (email.find(" ") != string::npos) || (email.find(".") == string::npos)) {

			cout << email << ":  " << classRosterArray[i]->getStudfName() << " " <<
				classRosterArray[i]->getStudlName() << endl;
		}
	}
	cout << endl;
}



	void Roster::printAvgDaysInCourse(string studentID) {

		for (int i = 0; i <= lastIndex; ++i) {
			if (classRosterArray[i]->getStudID() == studentID) {

				cout << studentID << ":";
				cout << (classRosterArray[i]->getdaysIncourse()[0] + classRosterArray[i]->getdaysIncourse()[1]
					+ classRosterArray[i]->getdaysIncourse()[2]) / 3.0 << endl;

			}

		}
}

void Roster::remove(string studentID) {// removes student by student ID
	bool found = false;
	for (int i = 0; i <= Roster::lastIndex; i++)
	{

		if (classRosterArray[i]->getStudID() == studentID) {

			found = true; //found ID
			if (i < numStudents - 1) {

				Student* tempvar = classRosterArray[i]; //swap method, moving pointer
				classRosterArray[i] = classRosterArray[numStudents - 1];
				classRosterArray[numStudents - 1] = tempvar;

			}
			Roster::lastIndex--;
		}

		if (found) {

			cout << studentID << ":  Removed from Roster." << endl << endl;
			this->printAll();
		}
		else {
			cout << studentID << " not found." << endl << endl;
		}
	}
}


Roster::~Roster() {

	cout << "Destroying roster:   " << endl << endl;

	for (int i = 0; i < numStudents; i++)
	{

		cout << "destroying entry #" << i + 1 << endl;
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;

	}
}

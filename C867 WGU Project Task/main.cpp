#include "roster.h"
// Scripting and Programming - Applications – C867 Final Task
//by Oscar A.
int main() {
	const string studentData[] =

	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Oscar,Ayala,oayala@wgu.edu,31,20,33,64,SOFTWARE"

	};

	const int numStudents = 5;
	Roster classRoster;

	for (int i = 0; i < numStudents; i++)classRoster.parseData(studentData[i]);
	cout << "Diplaying all students: " << endl;
	classRoster.printAll();
	cout << endl;


	for (int i = 0; i < 3; i++) {

		cout << "Displaying by Degree program: " << degreeprogstrings[i] << endl;
		classRoster.printByDegreeProgram((DegreeProgram)i); //cast to Degree Program Enum TYPE

	}

	cout << "Displaying with Invalid Emails" << endl;
	classRoster.printInvalidEmails();
	cout << endl;

	cout << "Displaying avergrage prices: " << endl;

	cout << "Removing book with ID :" << endl;
	classRoster.remove("A3");
	cout << endl;

	system("pause");
	return 0;
}



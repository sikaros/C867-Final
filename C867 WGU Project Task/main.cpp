#include "roster.h"


int main() {
	const string studentData[] =

	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Oscar,Ayala,oayala@wgu.edu,31,20,33,64,SOFTWARE"

	};

	const int numStudents = 5;
	Roster classRoster;


	/*Print out to the screen, 
	via your application, the course title, the programming language used, your WGU student ID, and your name.*/
	cout << "---------Scripting and Programming - Applications – C867---------------" << endl;
	cout << "-----------------------MADE WITH C++ BY OSCAR AYALA -------------------" << endl;
	cout << "--------------------STUDENT ID:  000485711 ---------------------------" << endl << endl;;

	for (int i = 0; i < numStudents; i++)classRoster.parseData(studentData[i]);
	cout << "CURRENT STUDENT ROSTER:  " << endl;
	classRoster.printAll();
	cout << endl << endl;
	
	cout << "INVALID EMAILS SHOWN BELOW: " << endl;

	classRoster.printInvalidEmails();
	cout << endl;



	////loop through classRosterArray and for each element:
	cout << " SHOWING AVERAGE COURSE DAYS FOR ALL STUDENTS:  " << endl;
	classRoster.printAvgDaysInCourse();
	cout << endl;
	

	
	classRoster.remove("A3");

	classRoster.printAll();

	classRoster.remove("A3");


	system("pause");

	return 0;

}

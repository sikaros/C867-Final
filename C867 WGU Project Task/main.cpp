#include "roster.h"

// OBBJECTIVE B.  Create a C++ project in your integrated development environment (IDE) with the following files:



int main() { //OBJECTIVE F. create a main function.
	const string studentData[] =

	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Oscar,Ayala,oayala@wgu.edu,31,20,33,64,SOFTWARE" //OBJECTIVE A.  Modify the “studentData Table” to include your personal information as the last item.


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
	cout << " SHOWING AVERAGE COURSE DAYS FOR THIS STUDENT:  " << endl;
	classRoster.printAvgDaysInCourse("A5");
	cout << endl;
	

	
	classRoster.remove("A3"); //this will remove  student with ID 'A3'

	classRoster.printAll();

	classRoster.remove("A3");


	system("pause");

	return 0;

}

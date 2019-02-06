#include<iostream>
#include "decisions.h"

//write include statements

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
using std::cout;
using std::endl;
using std::cin;
using std::string;
int main() 
{
	string grade1;
	string grade2;
	string grade3;


	cout << "Enter the first letter grade: ";
	cin >> grade1;
	cout << "Enter the letter second grade: ";
	cin >> grade2;
	cout << "Enter the letter third grade: ";
	cin >> grade3;

	int chour1;
	int chour2;
	int chour3;


	cout << "Enter the credit hours for 1st course: ";
	cin >> chour1;
	cout << "Enter the credit hours for 2nd course: ";
	cin >> chour2;
	cout << "Enter the credit hours for 3rd course: ";
	cin >> chour3;

	double points1 = get_grade_points(grade1);
	double points2 = get_grade_points(grade2);
	double points3 = get_grade_points(grade3);

	double total_points = points1 + points2 + points3;
	int total_hours = chour1 + chour2 + chour3;
	
	double gpa = calculate_gpa(total_hours, total_points);
	cout << "Total Points: " << total_points << endl;
	cout << "Total Hours: " << total_hours << endl;
	cout << "GPA: " << gpa << endl;
	

	system("pause");

	return 0;
}
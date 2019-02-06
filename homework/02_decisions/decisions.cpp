//write include statement for decisions header
#include"decisions.h"
//Write code for function get_grade_points that accepts a string letter_grade and returns 
//the grade_points for as follows:
//given grade "A" returns 4
//given grade "B" returns 3
//given grade "C" returns 2
//given grade "D" returns 1
//given grade "F" returns 0
//another other value return -1
int get_grade_points(std::string grade)
{	
	int grade_points;
	if (grade == "A")
		grade_points = 4;
	else if (grade == "B")
		grade_points = 3;
	else if(grade == "C")
		grade_points = 2;
	else if(grade == "D")
		grade_points = 1;
	else if (grade == "F")
		grade_points = 0;
	else
		grade_points = -1;
	return grade_points;

}
 
//Write code for function calculate_gpa that accepts an int named credit_hours and
//a double named credit_points.  The function returns the quotient of credit_points divided by
//credit_hours. In the function account for division by zero by returning a -1.

double calculate_gpa(int credit_hours, double credit_points)
{
	if (credit_hours == 0)
		return -1;
	return credit_points / credit_hours;
}









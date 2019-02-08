#include "loops.h"
#include<iostream>
/*
Use a do while loop to prompt the user for
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
using std::cout;
using std::cin;
int main()
{
	char choice;
	int num;
	do
	{
		cout << "Enter a number: ";
		cin >> num;
		cout << factorial(num) << "\n";
		cout << "Do you want to continue? (y=yes: press any other key to quit) ";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');
	return 0;
}
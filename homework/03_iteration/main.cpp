#include <iostream>
#include "dna.h"
/*
Write code that prompts user to enter 1 for Get GC Content,
or 2 for Get DNA Complement.  The program will prompt user for a
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as
user enters a y or Y.
*/
using std::cout;
using std::cin;

int main()
{



	char choice;
	do
	{

		std::string dnaString;
		int Pchoice;
		cout << "Enter a DNA string: ";
		cin >> dnaString;
		cout << "Enter 1 for GC Content or Enter 2 for DNA Complement: ";
		cin >> Pchoice;

		if (Pchoice == 1)
		{
			double gc = get_gc_content(dnaString);
			cout << gc;
		}
		else if (Pchoice == 2)
		{
			std::string complement = get_dna_complement(dnaString);
			cout << complement;
		}
		else
			cout << "Invalid Option, please try again. ";








		cout << "Continue? (enter y/n): ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	return 0;
}










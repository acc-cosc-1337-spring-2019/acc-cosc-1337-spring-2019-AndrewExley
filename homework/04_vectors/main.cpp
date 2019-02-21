#include<string>
#include<iostream>
#include <vector>

#include "vectors.h"

using std::cout;
using std::cin;
using std::vector;
/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	vector<int> test_vector = {3,8,1,99,1000};


	int x;
	int t;
	char choice;
	do
	{

		cout << "Enter 1 for Get Max from vector or 2 for Get Primes: ";
		cin >> x;
		if (x == 1)
		{
			int max = get_max_from_vector(test_vector);
			cout << max <<"\n";
		}
		else if (x == 2)
		{
			cout << "Enter a number: ";
			cin >> t;
			vector<int> primes =  vector_of_primes(t);

			for (auto p : primes) 
			{
				cout << p << " ";
			}
		}

		else
		{
			cout << "Invalid value\n";
		}

		cout << "\n Continue y: ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');
	

	return 0;
}
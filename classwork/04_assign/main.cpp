#include<iostream>
#include "sequence.h"
using std::cout;
using std::cin;
/*
Write code to create a vector of string names, add the values "John", "Mary", "Patty",
"Sam" to the vector, call the function display_vector and pass the names vector as
@@ -10,6 +17,17 @@ give you a valid name.
*/

int main()
{

	vector<string> names = { "John","Mary","Patty","Sam" };
	display_vector(names);
	string search, replace;

	cout << "Enter a name to search for: ";
	cin >> search;
	cout<< "replace";
	cin >> replace;
	update_vector_element(names, search, replace);
	display_vector(names);
	return 0;
}

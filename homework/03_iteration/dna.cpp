#include<string>
#include "dna.h"

#include <iostream>

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const std::string& dna)
{
	int count = 0;
	for (auto d : dna)
	{
		if (d == 'G' || d == 'C')
		{
			count++;
		}
	}

	return count / dna.size();
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

std::string get_reverse_string(std::string dna)
{
	std::string Rstring;
	for (int i = dna.size() - 1; i >= 0; i--)
	{
		Rstring += dna[i];
	}

	return Rstring;
}
/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:


a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
	replace A with T, T with A, C with G and G with C
c. return string

*/
 std::string get_dna_complement(std::string dna)
{	
	std::string reverse = get_string(dna);
	for (auto&d : reverse)
	{	
		if (dna[i] == "T")
		{
			dna[i] = "A";
		}
		else if (dna[i] == "A")
		{
			dna[i] = "T";
		}
		else if (dna[i] == "C")
		{
			dna[i] = "G";
		}
		else if (dna[i] == "G")
		{
			dna[i] = "C";
		}
	}

	return reverse;
	

	return "";
}

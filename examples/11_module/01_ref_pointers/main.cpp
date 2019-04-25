#include"ref_pointers.h"
#include<iostream>


int main() 
{
	int* hold_return_value;
	int num = 5;
	hold_return_value = return_pointer(num);
	/*int number = 10;
	int*numberPtr = &number;

	ref(number, numberPtr);

	//Display value should be 100
	std::cout << number;

	std::cout << "Address of Number: " << &number << " value is " << number << "\n";
	//a pointer can store the address of a variable
	
	std::cout << "Address of numberPtr:" << &numberPtr << "value stored at address poined to is" << numberPtr <<
		"\n Deference numberPtr: " << *numberPtr;

	
	return 0;
	*/
}
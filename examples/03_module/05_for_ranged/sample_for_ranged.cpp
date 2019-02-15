#include"sample_for_ranged.h"
#include<iostream>
#include<vector>

using std::vector;

void loop_string_w_index(std::string str)
{
	for (int i = 0; i < str.length(); ++i)
	{
		std::cout << str[i] << "\n";
	}
}

void loop_string_w_auto()
{
	for (auto c : str)
	{
		std::cout << c << "/n";

	}
}

void loop_vector_w_index(std::vector<int>& values);
{
	
	values 
	vector<int> nums = { 9,10,99,5,67 };
	for (int i = 0; i < values.size(); ++i)
{
		std::cout << values[i] << "\n";
}
}
void loop_vector_w_index(std::vector<int>& values)
void loop_vector_w_auto()
{
	
		for (auto n : nums)
		{
			std::cout << n << "\n";
		}
}

void loop_const_vector(const std::vector<int>&values)
{
	for (auto v : values)
	{
		std::cout << v << "\n";
	}
}
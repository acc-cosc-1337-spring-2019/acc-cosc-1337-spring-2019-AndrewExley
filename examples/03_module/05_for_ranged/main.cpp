#include<string>
#include<iostream>
#include"sample_for_ranged.h"

int main()
{
	//call count letters function
	
std:vector<int> nums = { 44, 55, 77, 11, 99 };
	nums.push_back(25);
	nums.erase(nums.begin() + 1);
	loop_vector_w_index(nums);
	for (auto n : nums)
	{
		std::cout << n << "\n";
	}
	return 0;
}
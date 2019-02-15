#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "sample_while.h"

TEST_CASE("Test function sum_of_squares with preincrement ++i") 
{
	REQUIRE(sum_of_squares(4) == 30);
}


/*
Create test case for count_letters_in_string with values:
string     char          result
"james"     e              1
"larry"     r              2
"sammy m"   m              3 
*/

TEST_CASE("Test pass vector by value")
{
std:vector<int> nums = { 44, 55, 77, 11, 99 };
std:vector<int> nums = { 44, 55, 77, 11, 99 };
	loop_vector_w_index(nums);
	for (int i = 0; i < num.size(); ++i)
	{
		REQUIRE(num[i] == nums[i]);
	}
}

TEST_CASE("Test pass vector by reference")
{
std:vector<int> nums = { 1000, 55, 77, 11, 99 };
std:vector<int> nums = { 44, 55, 77, 11, 99 };
	loop_vector_w_index(nums);
	for (int i = 0; i < num.size(); ++i)
	{
		REQUIRE(num[i] == nums[i]);
	}
}
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Test case function get_gc_content(string dna)

Value	Result
AGCTATAG	.375
CGCTATAG	.50
*/

TEST_CASE("Test case function for get_gc_content")
{
	REQUIRE(AGCTATAG(.375)==true)
	REQUIRE(CGCTATAG(.50)==true)
}


/*
Test case function get_reverse_string(string dna)

Value	Result
AGCTATAG	GATATCGA
CGCTATAG	GATATCGC
*/
TEST_CASE("Test case function for get_reverse_string")
{
	REQUIRE(AGCTATAG(GATATCGA)==true)
	REQUIRE(CGCTATAG(GATATCGC)==true)
}


/*
Test case get dna complement

Value	Result
AAAACCCGGT	ACCGGGTTTT
CCCGGAAAAT	ATTTTCCGGG
*/
TEST_CASE("Test case function for get dna complement")
{
	REQUIRE(AAAACCCGGT(ACCGGGTTTT)==true)
	REQUIRE(CCCGGAAAAT(ATTTTCCGGG)==true)
}
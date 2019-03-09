#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Write a Test case for function get_grade_points with following values:
given grade "A" returns 4
given grade "B" returns 3
given grade "C" returns 2
given grade "D" returns 1
given grade "F" returns 0
given grade "Y" returns -1
*/
TEST_CASE("Test case for the get_grade_points function")
{
REQUIRE(grade_points(4)==true)
REQUIRE(grade_points(3)==true)
REQUIRE(grade_points(2)==true)
REQUIRE(grade_points(1)==true)
REQUIRE(grade_points(0)==true)
REQUIRE(grade_points(-1)==true)
}

/*
Write a Test case for function calculate_gpa with following values:
credit_hours	credit_points		gpa
12				45					3.75
120				390					3.25
90				180					2.00
*/
TEST_CASE("Test case for the calculate_gpa function")
{
	REQUIRE(credit_hours(12)==true)
	REQUIRE(credit_hours(120)==true)
	REQUIRE(credit_hours(90)==true)
	REQUIRE(credit_points(45)==true)
	REQUIRE(credit_points(390)==true)
	REQUIRE(credit_points(180)==true)
	REQUIRE(gpa(3.75)==true)
	REQUIRE(gpa(3.25)==true)
	REQUIRE(gpa(2.0)==true)

}

#include "rectangle.h"
#include<iostream>
#include<vector>
using std::cout;
using std::cin;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/
int main() 
{
	int x=0;
	std::vector<RectangleClass>area;
	RectangleClass area1(4, 5);
	RectangleClass area2(10, 10);
	RectangleClass area3(100, 10);
	
	area.push_back(area1);
	area.push_back(area2);
	area.push_back(area3);
	for (auto act : area)
	{
		x = act.get_area() + x;
		cout << act.get_area() << "\n";

	}
	cout << x;
}
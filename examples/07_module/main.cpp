//main
#include<memory>
#include<iostream>
#include "shape.h"
#include"line.h"
#include<vector>
#include"circle.h"
using std::vector;
using std::cout;
int main()
{
	//Shape s_abstract;(error) unable to create instance; pure virtual function makes an abstract class

	Shape* line = new Line; //creates dynamic memory (heap)
	line->draw();
	delete line;
	vector<Shape*> shapes{ new Line() , new Circle() };

	for (auto& shape: shapes)
	{
	shape->draw();
	}

	cout << "\n";
	for (auto*shape : shapes)
	{
		shape->draw();
	}
	cout << "\n";
	//shape instance using a Smart Pointer
	std::unique_ptr < Shape > l = std::make_unique<Line>();
	l->draw();

	//vector of shape pointers
	vector <std::unique_ptr < Shape >> shaps;
	shaps.push_back(std::make_unique< Line >());
	shaps.push_back(std::make_unique< Circle >());

	for (auto & shape : shapes)
	{
		shape->draw();
	}
	return 0;
}
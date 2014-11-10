/*
 * DrawingMenager.cpp
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */

#include "DrawingMenager.h"
#include <iostream>
#include <list>
#include "Circle.h"
#include "Rectangle.h"

DrawingMenager::DrawingMenager()
{
}

DrawingMenager::~DrawingMenager()
{
	// TODO Auto-generated destructor stub
}

void DrawingMenager::TakeuserInput()
{
	int comand;
	while(true)
	{
		cout << "Please enter a type of shape to create it: 1 for circle, 2 for rectangle and 3 for triangle: " << endl;
		cin >> comand;
		switch(comand)
		{
		     case 1: 
		     {
		    	 double radius;
		    	 cout << "Please enter a radius: " << endl;
		    	 cin >> radius;
		    	 Circle * circle = new Circle(radius);
		    	 shapes.push_back(*circle);
		     }
		         break;
		     case 2:
		     {
		    	 double width;
		    	 double height;
				 cout << "Please enter a width and height: " << endl;
				 cin >> width >> height;
				 Rectangle * rectangle = new Rectangle(width, height);
		    	 shapes.push_back(*rectangle);
				 
		     }
		         break;
		     case 3:
		    	 break;
		     default:
		         break;
		}
	}
}

void DrawingMenager::DrawShape()
{
}

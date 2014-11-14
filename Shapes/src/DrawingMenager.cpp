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
#include "Triangle.h"
#include "Shape.h"

DrawingMenager::DrawingMenager()
{
}

DrawingMenager::~DrawingMenager()
{
}

void DrawingMenager::DrawShapes()
{
	for (auto shape : shapes)
	{
		shape->Draw();
	}
}

void DrawingMenager::TakeuserInput()
{
	Shape *triangle;
	Shape *circle;
	Shape *rectangle;
	
	int command;
	
	while(true)
	{
		cout << "Please enter a type of shape to create it: 1 for circle, 2 for rectangle, 3 for triangle and 4 to draw all created shapes: " << endl;
		cin >> command;
		
		switch(command)
		{
		     case 1: 
		     {
		    	 double radius;
		    	 
		    	 cout << "Please enter a radius: " << endl;
		    	 cin >> radius;
		    	 circle = new Circle(radius);
		    	 shapes.push_back(circle);
		     }
		         continue;
		     case 2:
		     {
		    	 double width;
		    	 double height;
		    	 
				 cout << "Please enter a width and height: " << endl;
				 cin >> width >> height;
				 rectangle = new Rectangle(width, height);
		    	 shapes.push_back(rectangle);
				 
		     }
		     	 continue;
		     case 3:
		     {
		    	 double firstSide;
		    	 double secondSide;
		    	 double thirdSide;
		    	 
		    	 cout << "Please enter sides of triangle: " << endl;
		    	 cin >> firstSide >> secondSide >> thirdSide;
		    	 triangle =  new Triangle(firstSide, secondSide, thirdSide);
		    	 shapes.push_back(triangle);
		     }
		     	 continue;
		     case 4:
		     {
		    	 char userChoise;
		    	 DrawShapes();
		    	 cout << "If you want to create more shapes please enter y otherwise enter n: " << endl;
		    	 cin >> userChoise;
		    	 if(userChoise == 'y')
		    	 {
		    		 continue;
		    	 }
		    	 if(userChoise == 'n')
		    	 {
		    		 cout << "Good buy!" << endl;
		    	 }
		     }
		     return;
		     default:
		    	 cout << "Invalid command! Please try again!" << endl;
		         continue;
		}
	}
}


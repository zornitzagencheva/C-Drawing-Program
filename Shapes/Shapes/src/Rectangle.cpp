/*
 * Rectangle.cpp
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */
#include <iostream>
#include "Rectangle.h"
#include <cmath>

using namespace std;

Rectangle::Rectangle(double width, double heigth)
{
	// TODO Auto-generated constructor stub
	this->width = width;
	this->height = height;
}

Rectangle::~Rectangle()
{
	// TODO Auto-generated destructor stub
}

void Rectangle::Draw()
{
	cout << "I am rectangle!" << endl;
}

double Rectangle::CalculateArea()
{
	return this->height * this->width;
}

double Rectangle::CalculatePerimeter()
{
	return (this->height * 2) + (this->width * 2);
}

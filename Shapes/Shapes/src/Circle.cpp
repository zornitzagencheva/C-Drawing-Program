/*
 * Circle.cpp
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */
#include <iostream>
#include "Circle.h"
#include <cmath>

using namespace std;

Circle::~Circle()
{
	// TODO Auto-generated destructor stub
}

Circle::Circle(double radius)
{
	// TODO Auto-generated constructor stub
	this->radius = radius;
}

void Circle::Draw()
{
	cout << "I am circle!" << endl;
}

double Circle::CalculateArea()
{
	return M_PI * this->radius * this->radius;
}

double Circle::CalculatePerimeter()
{
	return 2 * M_PI * this->radius;
}

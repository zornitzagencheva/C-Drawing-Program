/*
 * Triangle.cpp
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */
#include <iostream>
#include "Triangle.h"
#include <cmath>

using namespace std;

Triangle::Triangle(double firstSide, double secondSide, double thirdSide)
{
	this->firstSide = firstSide;
	this->secondSide = secondSide;
	this->thirdSide = thirdSide;
}

Triangle::~Triangle()
{
	// TODO Auto-generated destructor stub
}

void Triangle::Draw()
{
	cout << "I ame triangle!" << endl;
}

double Triangle::CalculateArea()
{
	// s = (a+b+c)/2 = 6
	// Area = √( s(s-a)(s-b)(s-c) ) = 6
	double halfPerimeter = (this->firstSide + this->secondSide + this->thirdSide) / 2;
	double triangleArea = sqrt(halfPerimeter * 
			(halfPerimeter - this->firstSide) * 
			(halfPerimeter - this->secondSide) * 
			(halfPerimeter - this->thirdSide));
	return triangleArea;
}

double Triangle::CalculatePerimeter()
{
	return (this->firstSide + this->secondSide + this->thirdSide);
}

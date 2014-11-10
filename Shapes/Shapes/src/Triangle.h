/*
 * Triangle.h
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"

class Triangle: public Shape
{
	public:
		Triangle(double firstSide, double secondSide, double thirdSide);
		virtual ~Triangle();
		void Draw();
		double CalculateArea();
		double CalculatePerimeter();
	private:
		double firstSide = 0;
		double secondSide = 0;
		double thirdSide = 0;
};

#endif /* TRIANGLE_H_ */

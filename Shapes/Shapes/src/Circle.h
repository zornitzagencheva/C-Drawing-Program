/*
 * Circle.h
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle: public Shape
{
	public:
		virtual ~Circle();
		Circle(double radius);
		void Draw();
		double CalculateArea();
		double CalculatePerimeter();
	private:
		double radius = 0;
};

#endif /* CIRCLE_H_ */

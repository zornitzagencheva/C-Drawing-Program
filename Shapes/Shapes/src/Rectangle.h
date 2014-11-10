/*
 * Rectangle.h
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle: public Shape
{
	public:
		Rectangle(double width, double height);
		virtual ~Rectangle();
		void Draw();
		double CalculateArea();
		double CalculatePerimeter();
	private:
		double width = 0;
		double height = 0;
};

#endif /* RECTANGLE_H_ */

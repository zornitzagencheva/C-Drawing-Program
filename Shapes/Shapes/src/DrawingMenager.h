/*
 * DrawingMenager.h
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */

#ifndef DRAWINGMENAGER_H_
#define DRAWINGMENAGER_H_
#include <list>
#include "Shape.h"
using namespace std;

class DrawingMenager
{
	public:
		DrawingMenager();
		virtual ~DrawingMenager();
		void TakeuserInput();
		void DrawShape();
	private:
		list<Shape> shapes;
};

#endif /* DRAWINGMENAGER_H_ */

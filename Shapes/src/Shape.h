/*
 * Shape.h
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include "IDrawable.h"
#include "Coordinates.h"


class Shape : public IDrawable
{
	public:
		virtual ~Shape();
		Shape();
		virtual void Draw();
	private:
		Coordinates coordinates = {0, 0};
};

#endif /* SHAPE_H_ */

/*
 * IDrawable.h
 *
 *  Created on: Nov 9, 2014
 *      Author: ivaylo
 */

#ifndef IDRAWABLE_H_
#define IDRAWABLE_H_

class IDrawable
{
public:
	virtual ~IDrawable() {}
	virtual void Draw() = 0;
};

#endif /* IDRAWABLE_H_ */

//============================================================================
// Name        : Shapes.cpp
// Author      : Ivaylo Genchev
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "DrawingMenager.h"
using namespace std;


int main() 
{
	DrawingMenager *dm = new DrawingMenager();
	dm->TakeuserInput();
	return 0;
}

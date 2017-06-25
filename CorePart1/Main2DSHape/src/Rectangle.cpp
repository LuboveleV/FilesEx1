/*
 * Rectangle.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#include "Rectangle.h"


void Rectangle::print() {
     Shape::print();
}

Rectangle::Rectangle(int a, int b, string color)
:Shape(a,b,color)
{
}

double Rectangle::calculateArea() {
	return getA()*getB();
}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}


/*
 * Triangle.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#include "Triangle.h"



int Triangle::getC() const {
	return c;
}

void Triangle::print() {
	Shape::print();
	cout<<getC()<<endl;
}

Triangle::Triangle(int a, int b, string color, int c)
:Shape(a,b,color)
{
	setC(c);
}

double Triangle::calculateArea() {
	return getA()*getC()/2;
}

void Triangle::setC(int c) {
	this->c = c;
}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}


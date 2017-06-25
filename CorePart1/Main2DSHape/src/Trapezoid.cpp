/*
 * Trapezoid.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#include "Trapezoid.h"



int Trapezoid::getH() const {
	return h;
}

double Trapezoid::calculateArea() {
	return getA()*getB()/2 *getH();
}

void Trapezoid::setH(int h) {
	this->h = h;
}

void Trapezoid::print() {
	Shape::print();
	cout<<getH()<<endl;
}

Trapezoid::Trapezoid(int a, int b, string color, int h)
:Shape(a,b,color)
{
	setH(h);
}

Trapezoid::~Trapezoid() {
	// TODO Auto-generated destructor stub
}


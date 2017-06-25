/*
 * Shape.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#include "Shape.h"

int Shape::getA() const {
	return a;
}

void Shape::setA(int a) {
	this->a = a;
}

int Shape::getB() const {
	return b;
}

void Shape::setB(int b) {
	this->b = b;
}

const string& Shape::getColor() const {
	return color;
}

Shape::Shape(int a,int b, string color) {
	setA(a);
	setB(b);
	setColor(color);

}

 void Shape::print() {
	cout<<getA()<<" "<<getB()<<" "<<getColor()<<endl;

}

void Shape::setColor(const string& color) {
	this->color = color;
}

Shape::~Shape() {
	// TODO Auto-generated destructor stub
}

double Shape::calculateArea() {
	return 0;
}

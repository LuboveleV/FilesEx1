/*
 * Rectangle.h
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include<string>
#include<iostream>
using namespace std;

#include "Shape.h"

class Rectangle: public Shape {
private:

public:
	double calculateArea();
	 void print();
	Rectangle(int,int,string);
	virtual ~Rectangle();
};

#endif /* RECTANGLE_H_ */

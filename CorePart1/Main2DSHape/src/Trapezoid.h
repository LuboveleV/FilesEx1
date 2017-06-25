/*
 * Trapezoid.h
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_
#include<string>
#include<iostream>
using namespace std;

#include "Shape.h"

class Trapezoid: public Shape {
private:
	int h;
public:
	double calculateArea();
	 void print();
	Trapezoid(int,int,string,int);
	virtual ~Trapezoid();
	int getH() const;
	void setH(int h);
};

#endif /* TRAPEZOID_H_ */

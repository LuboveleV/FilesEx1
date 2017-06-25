/*
 * Triangle.h
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include<string>
#include<iostream>
using namespace std;

#include "Shape.h"

class Triangle: public Shape {
private:
	int c;
public:
	double calculateArea();
    void print();
	Triangle(int,int,string,int);
	virtual ~Triangle();
	int getC() const;
	void setC(int c);
};

#endif /* TRIANGLE_H_ */

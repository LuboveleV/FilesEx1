/*
 * Shape.h
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include<string>
#include<iostream>
using namespace std;

class Shape {
private:
	int a;
	int b;
	string color;
public:
	double calculateArea();
	Shape(int,int,string);
	virtual void print();
	virtual ~Shape();
	int getA() const;
	void setA(int a);
	int getB() const;
	void setB(int b);
	const string& getColor() const;
	void setColor(const string& color);
};

#endif /* SHAPE_H_ */

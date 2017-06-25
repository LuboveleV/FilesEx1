/*
 * Pizza.h
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#ifndef PIZZA_H_
#define PIZZA_H_
#include<string>
#include<iostream>
using namespace std;

class Pizza {
private:
	string name;
	double price;
public:
	Pizza(string,double);
	virtual ~Pizza();
	const string& getName() const;
	void setName(const string& name);
	double getPrice() const;
	void setPrice(double price);
};

#endif /* PIZZA_H_ */

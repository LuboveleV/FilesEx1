/*
 * Pizza.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#include "Pizza.h"

Pizza::Pizza(string name,double price) {

	setName(name);
	setPrice(price);

}

const string& Pizza::getName() const {
	return name;
}

void Pizza::setName(const string& name) {
	this->name = name;
}

double Pizza::getPrice() const {
	return price;
}

void Pizza::setPrice(double price) {
	this->price = price;
}

Pizza::~Pizza() {
	// TODO Auto-generated destructor stub
}


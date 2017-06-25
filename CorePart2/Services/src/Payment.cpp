/*
 * Payment.cpp
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#include "Payment.h"

const string& Payment::getDate() const {
	return date;
}

void Payment::setDate(const string& date) {
	this->date = date;
}

double Payment::getPrice() const {
	return price;
}

Payment::Payment(string date, double price) {
	setDate(date);
	setPrice(price);
}

void Payment::print() {
	cout<<getPrice()<<" "<<getDate()<<endl;
}

void Payment::setPrice(double price) {
	this->price = price;
}

Payment::~Payment() {
	// TODO Auto-generated destructor stub
}


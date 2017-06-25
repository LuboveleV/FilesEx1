/*
 * Address.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#include "Address.h"

int Address::getId() const {
	return id;
}

void Address::setId(int id) {
	this->id = id;
}

int Address::getNumber() const {
	return number;
}

void Address::setNumber(int number) {
	this->number = number;
}

const string& Address::getStreet() const {
	return street;
}

void Address::setStreet(const string& street) {
	this->street = street;
}

Address::Address(){
	setId(0);
	setStreet("");
	setNumber(0);
}
Address::Address(int id, string street, int number) {
	setId(id);
	setStreet(street);
	setNumber(number);

}
Address::~Address(){

}

void Address::print() {
	cout<<getId()<<" "<<getStreet()<<" "<<getNumber()<<endl;
}

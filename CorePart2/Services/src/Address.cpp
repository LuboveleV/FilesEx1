/*
 * Address.cpp
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#include "Address.h"

const string& Address::getCity() const {
	return city;
}

void Address::setCity(const string& city) {
	this->city = city;
}

const string& Address::getStreet() const {
	return street;
}

void Address::setStreet(const string& street) {
	this->street = street;
}

int Address::getZip() const {
	return zip;
}

Address::Address(string street, string city, int zip) {
	setStreet(street);
	setCity(city);
	setZip(zip);
}

void Address::setZip(int zip) {
	this->zip = zip;
}

Address::~Address() {
	// TODO Auto-generated destructor stub
}


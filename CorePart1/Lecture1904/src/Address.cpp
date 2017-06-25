/*
 * Address.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: LyBo-Pc
 */

#include "Address.h"



const string& Address::getCity() const {
	return city;
}

void Address::setCity(const string& city) {
	this->city = city;
}

const string& Address::getCountry() const {
	return country;
}

void Address::setCountry(const string& country) {
	this->country = country;
}

int Address::getPostCode() const {
	return postCode;
}

void Address::printInfo() {
	cout<<"Post code:"<<this->getPostCode()<<endl;
	cout<<"City:"<<this->getCity()<<endl;
	cout<<"Country:"<<this->getCountry()<<endl;
}

Address::Address(int postCode, string city, string country) {
	 this->postCode = postCode;
	 this->city=city;
	 this->country=country;
}

void Address::setPostCode(int postCode) {
	this->postCode = postCode;
}

Address::~Address() {
	// TODO Auto-generated destructor stub
}


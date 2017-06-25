/*
 * Receiver.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#include "Receiver.h"

void Receiver::addAddress(Address& adr) {
	adresses.push_back(adr);

}

const vector<Address>& Receiver::getAdresses() const {
	return adresses;
}

void Receiver::setAdresses(const vector<Address>& adresses) {
	this->adresses = adresses;
}

const string& Receiver::getName() const {
	return name;
}

void Receiver::setName(const string& name) {
	this->name = name;
}

Receiver::Receiver(string name, vector<Address>& adr) {
	setName(name);
	setAdresses(adr);
}

Receiver::~Receiver() {
	// TODO Auto-generated destructor stub
}


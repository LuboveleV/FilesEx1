/*
 * Client.cpp
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#include "Client.h"

const Address& Client::getAdr() const {
	return adr;
}

void Client::setAdr(const Address& adr) {
	this->adr = adr;
}

const string& Client::getName() const {
	return name;
}

Client::Client(string name, Address& adr)
:adr(adr)
{
	setName(name);
}

void Client::print() {
	cout<<getName()<<" "<<getAdr()<<endl;
}

void Client::setName(const string& name) {
	this->name = name;
}

Client::~Client() {
	// TODO Auto-generated destructor stub
}


/*
 * SeiniorExpert.cpp
 *
 *  Created on: Apr 24, 2017
 *      Author: LyBo-Pc
 */

#include "SeiniorExpert.h"

SeiniorExpert::SeiniorExpert(string firstName,string secondName,
		string department,int salaryPerHour,int bonus,Address& adr,
		string technologies)
		:ExpertInherit(firstName,secondName,department,salaryPerHour,bonus,adr)
{
	setTechnologies(technologies);

}

const string& SeiniorExpert::getTechnologies() const {
	return technologies;
}

void SeiniorExpert::print() {
	ExpertInherit::print();
	cout<<getTechnologies()<<endl;
}

void SeiniorExpert::setTechnologies(const string& technologies) {
	this->technologies = technologies;
}

SeiniorExpert::~SeiniorExpert() {
	// TODO Auto-generated destructor stub
}


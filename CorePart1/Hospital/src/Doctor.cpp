/*
 * Doctor.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: LyBo-Pc
 */

#include "Doctor.h"



const string& Doctor::getName() const {
	return name;
}

void Doctor::setName(const string& name) {
	this->name = name;
}

const string& Doctor::getSpecialty() const {
	return specialty;
}

Doctor::Doctor(string name, string speciality,
		vector<Patient> patients)
{
	setName(name);
	setSpecialty(speciality);
}

Doctor::Doctor(string allocator, string allocator1,
		vector<Patient> allocator2) {
}

void Doctor::setSpecialty(const string& specialty) {
	this->specialty = specialty;
}

Doctor::~Doctor() {
	// TODO Auto-generated destructor stub
}


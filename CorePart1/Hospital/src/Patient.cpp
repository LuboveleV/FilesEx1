/*
 * Patient.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: LyBo-Pc
 */

#include "Patient.h"

int Patient::getAge() const {
	return age;
}

void Patient::setAge(int age) {
	this->age = age;
}

const string& Patient::getGender() const {
	return gender;
}

void Patient::setGender(const string& gender) {
	this->gender = gender;
}

const string& Patient::getName() const {
	return name;
}

Patient::Patient(string name, int age, string gender) {
	setName(name);
	setAge(age);
	setGender(gender);
}

void Patient::setName(const string& name) {
	this->name = name;
}

Patient::~Patient() {
	// TODO Auto-generated destructor stub
}


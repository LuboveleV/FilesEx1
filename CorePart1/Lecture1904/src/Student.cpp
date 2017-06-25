/*
 * Student.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: LyBo-Pc
 */

#include "Student.h"




Student::Student(string firstName, string famiyName, string specialty,
		Address &address)
:address(address)
{
this->firstName=firstName;
this->familyName=famiyName;
this->specialty=specialty;
}

void Student::printInfo() {
	cout<<"Name:"<<this->getFirstName()<<endl;
	cout<<"Family name:"<<this->getFamilyName()<<endl;
	cout<<"Specialty:"<<this->getSpecialty()<<endl;
	address.printInfo();
}

const Address& Student::getAddress() const {
	return address;
}

void Student::setAddress(const Address& address) {
	this->address = address;
}

const string& Student::getFamilyName() const {
	return familyName;
}

void Student::setFamilyName(const string& familyName) {
	this->familyName = familyName;
}

const string& Student::getFirstName() const {
	return firstName;
}

void Student::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

const string& Student::getSpecialty() const {
	return specialty;
}

void Student::setSpecialty(const string& specialty) {
	this->specialty = specialty;
}

Student::~Student() {
	// TODO Auto-generated destructor stub
}


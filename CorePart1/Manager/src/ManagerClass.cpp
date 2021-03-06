/*
 * ManagerClass.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#include "ManagerClass.h"

const string& ManagerClass::getDepartment() const {
	return department;
}

void ManagerClass::setDepartment(const string& department) {
	this->department = department;
}

const string& ManagerClass::getFirstName() const {
	return firstName;
}

void ManagerClass::setFirstName(const string& firstName) {
	this->firstName = firstName;
}

int ManagerClass::getHour() const {
	return hour;
}

void ManagerClass::setHour(int hour) {
	this->hour = hour;
}

const string& ManagerClass::getLastName() const {
	return lastName;
}

void ManagerClass::setLastName(const string& lastName) {
	this->lastName = lastName;
}

int ManagerClass::getSalaryPerHour() const {
	return salaryPerHour;
}

ManagerClass::ManagerClass(string firstName, string lastName,
		string department, int salaryPerHour,Address& adr)
:address(adr)
{
	setFirstName(firstName);
	setLastName(lastName);
	setDepartment(department);
	setSalaryPerHour(salaryPerHour);
	setHour(0);
	setYearsOfExpirience(0);


}

void ManagerClass::print() {
	cout<<getFirstName()<<" "<<getLastName()<<" "<<getDepartment()<<" "<<getSalaryPerHour()<<" "<<getHour()<<endl;
	address.print();
}

int ManagerClass::earnings() {
	return getSalaryPerHour()*getHour();
}

int ManagerClass::getYearsOfExpirience() const {
	return yearsOfExpirience;
}

void ManagerClass::setYearsOfExpirience(int yearsOfExpirience) {
	this->yearsOfExpirience = yearsOfExpirience;
}

void ManagerClass::setSalaryPerHour(int salaryPerHour) {
	this->salaryPerHour = salaryPerHour;
}

ManagerClass::~ManagerClass() {
	// TODO Auto-generated destructor stub
}


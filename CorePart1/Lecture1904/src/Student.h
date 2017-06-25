/*
 * Student.h
 *
 *  Created on: Apr 19, 2017
 *      Author: LyBo-Pc
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include<iostream>
using namespace std;
#include "Address.h"


class Student {
private:
	string firstName;
	string familyName;
	string specialty;
    Address address;

public:
 	Student(string="",string="", string="", Address& =Address(5,"s","s"));
	void printInfo();
	virtual ~Student();
	const Address& getAddress() const;
	void setAddress(const Address& address);
	const string& getFamilyName() const;
	void setFamilyName(const string& familyName);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getSpecialty() const;
	void setSpecialty(const string& specialty);
};

#endif /* STUDENT_H_ */

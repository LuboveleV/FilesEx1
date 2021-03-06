/*
 * JuniorExpert.cpp
 *
 *  Created on: Apr 24, 2017
 *      Author: LyBo-Pc
 */

#include "JuniorExpert.h"



const string& JuniorExpert::getAtestment() const {
	return atestment;
}

void JuniorExpert::setAtestment(const string& atestment) {
	this->atestment = atestment;
}

double JuniorExpert::getDegree() const {
	return degree;
}

int JuniorExpert::calculateSalary() {
	if(getDegree()>5){
		return ExpertInherit::getBonus();
	}
		else
			return ExpertInherit::getBonus()/2;
}

JuniorExpert::JuniorExpert(string firstName, string secondName,
		string statement, int salaryPerHour, int bonus, Address& address, string atestment,
		double degree)
:ExpertInherit(firstName,secondName,statement,salaryPerHour,bonus,address)
{
	setAtestment(atestment);
	setDegree(degree);
}

void JuniorExpert::print() {
	ExpertInherit::print();
	cout<<getDegree()<<" "<<getAtestment()<<endl;
}

void JuniorExpert::setDegree(double degree) {
	this->degree = degree;
}

JuniorExpert::~JuniorExpert() {
	// TODO Auto-generated destructor stub
}


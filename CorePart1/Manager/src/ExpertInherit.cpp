/*
 * ExpertInherit.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#include "ExpertInherit.h"



int ExpertInherit::getBonus() const {
	return bonus;
}

ExpertInherit::ExpertInherit(string firstName, string secondName,
		string department, int salaryPerHour, int bonus,Address& adr)
:ManagerClass(firstName,secondName,department,salaryPerHour,adr)
{
	setBonus(bonus);
}

void ExpertInherit::print() {
	ManagerClass::print();
    cout<<getBonus();
}

int ExpertInherit::earnings() {
	return ManagerClass::earnings() +getBonus();
}

void ExpertInherit::setBonus(int bonus) {
	this->bonus = bonus;
}

ExpertInherit::~ExpertInherit() {
	// TODO Auto-generated destructor stub
}


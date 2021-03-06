/*
 * ManagerClass.h
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#ifndef MANAGERCLASS_H_
#define MANAGERCLASS_H_
#include <string>
#include"Address.h"
#include<iostream>
using namespace std;

class ManagerClass {
private:

	string firstName;
	string lastName;
	string department;
	int salaryPerHour;
	int hour;
	Address address;
	int yearsOfExpirience;
public:
	ManagerClass(string,string,string,int,Address&);
	virtual void print();
	int earnings();
	virtual ~ManagerClass();
	const string& getDepartment() const;
	void setDepartment(const string& department);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	int getHour() const;
	void setHour(int hour);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	int getSalaryPerHour() const;
	void setSalaryPerHour(int salaryPerHour);
	int getYearsOfExpirience() const;
	void setYearsOfExpirience(int yearsOfExpirience);
};

#endif /* MANAGERCLASS_H_ */

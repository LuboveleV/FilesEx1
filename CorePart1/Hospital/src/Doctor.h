/*
 * Doctor.h
 *
 *  Created on: Apr 19, 2017
 *      Author: LyBo-Pc
 */

#ifndef DOCTOR_H_
#define DOCTOR_H_
#include<iostream>
#include<vector>
#include<Patient.h>
using namespace std;

class Doctor {
public:
	string name;
	string specialty;
	vector<Patient> patients();
public:

	Doctor(string,string,vector<Patient>);
	virtual ~Doctor();
	Patient setPatient(vector<Patient>&);
	const string& getName() const;
	void setName(const string& name);
	const string& getSpecialty() const;
	void setSpecialty(const string& specialty);
};

#endif /* DOCTOR_H_ */

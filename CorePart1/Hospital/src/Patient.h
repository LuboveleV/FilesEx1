/*
 * Patient.h
 *
 *  Created on: Apr 19, 2017
 *      Author: LyBo-Pc
 */

#ifndef PATIENT_H_
#define PATIENT_H_
#include<string>
using namespace std;

class Patient {
private:
	string name;
	int age;
	string gender;

public:

	Patient(string,int,string);
	virtual ~Patient();
	int getAge() const;
	void setAge(int age);
	const string& getGender() const;
	void setGender(const string& gender);
	const string& getName() const;
	void setName(const string& name);
};

#endif /* PATIENT_H_ */

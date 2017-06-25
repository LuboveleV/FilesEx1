/*
 * SeiniorExpert.h
 *
 *  Created on: Apr 24, 2017
 *      Author: LyBo-Pc
 */

#ifndef SEINIOREXPERT_H_
#define SEINIOREXPERT_H_
#include<string>
#include<iostream>
using namespace std;

#include "ExpertInherit.h"

class SeiniorExpert: public ExpertInherit {
private:
	string technologies;
public:
	void print();
	SeiniorExpert(string,string,string,int,int,Address&,string);
	virtual ~SeiniorExpert();
	const string& getTechnologies() const;
	void setTechnologies(const string& technologies);
};

#endif /* SEINIOREXPERT_H_ */

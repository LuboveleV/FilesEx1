/*
 * JuniorExpert.h
 *
 *  Created on: Apr 24, 2017
 *      Author: LyBo-Pc
 */

#ifndef JUNIOREXPERT_H_
#define JUNIOREXPERT_H_

#include "ExpertInherit.h"

class JuniorExpert: public ExpertInherit {
private:
	string atestment;
	double degree;

public:
	int calculateSalary();
	void print();
	JuniorExpert(string,string,string,int,int,Address&,string,double);
	virtual ~JuniorExpert();
	const string& getAtestment() const;
	void setAtestment(const string& atestment);
	double getDegree() const;
	void setDegree(double degree);
};

#endif /* JUNIOREXPERT_H_ */

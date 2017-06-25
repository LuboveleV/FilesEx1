/*
 * ExpertInherit.h
 *
 *  Created on: Apr 21, 2017
 *      Author: LyBo-Pc
 */

#ifndef EXPERTINHERIT_H_
#define EXPERTINHERIT_H_
#include<iostream>
using namespace std;

#include "ManagerClass.h"

class ExpertInherit: public ManagerClass {
private:
	int bonus;
public:
	ExpertInherit(string,string,string,int,int,Address&);
	void print();
	int earnings();
	virtual ~ExpertInherit();
	int getBonus() const;
	void setBonus(int bonus);
};

#endif /* EXPERTINHERIT_H_ */

/*
 * Package.h
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#ifndef PACKAGE_H_
#define PACKAGE_H_
#include<iostream>
using namespace std;
#include"Client.h"


class Package {
private:
	double weight;
	double cost;
	Client sender;
	Client receiver;
public:
	Package(double,double,Client&,Client&);
	virtual ~Package();
	double getCost() const;
	void setCost(double cost);
	double getWeight() const;
	void setWeight(double weight);
};

#endif /* PACKAGE_H_ */

/*
 * Address.h
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include<iostream>
using namespace std;


class Address {
private:
	string street;
	string city;
	int zip;
public:
	Address(string,string,int);
	virtual ~Address();
	const string& getCity() const;
	void setCity(const string& city);
	const string& getStreet() const;
	void setStreet(const string& street);
	int getZip() const;
	void setZip(int zip);
};

#endif /* ADDRESS_H_ */

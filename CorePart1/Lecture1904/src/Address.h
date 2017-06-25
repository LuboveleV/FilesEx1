/*
 * Address.h
 *
 *  Created on: Apr 19, 2017
 *      Author: LyBo-Pc
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include<iostream>
using namespace std;


class Address {
private:
	int postCode;
	string city;
	string country;
	
public:
	void printInfo();
	Address(int=15,string="a",string="a");
	virtual ~Address();
	const string& getCity() const;
	void setCity(const string& city);
	const string& getCountry() const;
	void setCountry(const string& country);
	int getPostCode() const;
	void setPostCode(int postCode);
};

#endif /* ADDRESS_H_ */

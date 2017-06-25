/*
 * Address.h
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <string>
#include<iostream>
using namespace std;


class Address {
private:
	int id;
	string street;
	int number;


public:
	Address();
	Address(int,string,int);
    void print();
	virtual ~Address();
	int getId() const;
	void setId(int id);
	int getNumber() const;
	void setNumber(int number);
	const string& getStreet() const;
	void setStreet(const string& street);
};

#endif /* ADDRESS_H_ */

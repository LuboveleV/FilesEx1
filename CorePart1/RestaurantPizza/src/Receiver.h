/*
 * Receiver.h
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#ifndef RECEIVER_H_
#define RECEIVER_H_
#include<string>
#include<iostream>
#include<vector>
#include "Pizza.h"
#include "Address.h"
using namespace std;

class Receiver {
private:
	string name;
    vector<Address> adresses;
public:
    void addAddress(Address&);
	Receiver(string,vector<Address>&);
	virtual ~Receiver();
	const vector<Address>& getAdresses() const;
	void setAdresses(const vector<Address>& adresses);
	const string& getName() const;
	void setName(const string& name);
};

#endif /* RECEIVER_H_ */

/*
 * Client.h
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#ifndef CLIENT_H_
#define CLIENT_H_
#include<iostream>
using namespace std;
#include"Address.h"

class Client {
private:
	string name;
	Address adr;
public:
	virtual void print();
	Client(string,Address&);
	virtual ~Client();
	const Address& getAdr() const;
	void setAdr(const Address& adr);
	const string& getName() const;

	void setName(const string& name);
};

#endif /* CLIENT_H_ */

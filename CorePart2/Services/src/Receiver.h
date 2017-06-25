/*
 * Receiver.h
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#ifndef RECEIVER_H_
#define RECEIVER_H_
#include<iostream>
using namespace std;
#include"Address.h"
#include"Client.h"

class Receiver : public Client {
private:

public:
	Receiver(string,Address&);
	virtual ~Receiver();
};

#endif /* RECEIVER_H_ */

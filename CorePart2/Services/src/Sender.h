/*
 * Sender.h
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#ifndef SENDER_H_
#define SENDER_H_
#include<iostream>
using namespace std;
#include "Address.h"
#include "Client.h"
#include "Payment.h"

class Sender : public Client {
private:
	Payment payment;
public:
	Sender(string,Address&,Payment&);
	void print();
	virtual ~Sender();
	int getPayment() const;
	void setPayment(int payment);
};

#endif /* SENDER_H_ */

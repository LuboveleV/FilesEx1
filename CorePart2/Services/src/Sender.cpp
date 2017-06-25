/*
 * Sender.cpp
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#include "Sender.h"



void Sender::print() {
	Client::print();
	payment.print();
 }


Sender::Sender(string name, Address& adr,Payment& payment)
:Client(name,adr),payment(payment)
{

}

Sender::~Sender() {
	// TODO Auto-generated destructor stub
}


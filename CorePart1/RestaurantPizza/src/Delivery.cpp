/*
 * Delivery.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#include "Delivery.h"



Delivery::Delivery(vector<Receiver>& receiver, double price,
		vector<Pizza>& pizza) {


}

const vector<Pizza>& Delivery::getPizzas() const {
	return pizzas;
}

void Delivery::setPizzas(const vector<Pizza>& pizzas) {
	this->pizzas = pizzas;
}

double Delivery::getPrice() const {
	double sum=0;
	for(int i=0;i<pizzas.size();i++){
		sum+=pizzas[i].getPrice();
	}
	return sum;
}

void Delivery::setPrice(double price) {
	this->price = price;
}

const vector<Receiver>& Delivery::getReceivers() const {
	return receivers;
}

void Delivery::setReceivers(const vector<Receiver>& receivers) {
	this->receivers = receivers;
}

Delivery::~Delivery() {
	// TODO Auto-generated destructor stub
}


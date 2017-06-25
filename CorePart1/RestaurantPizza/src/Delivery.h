/*
 * Delivery.h
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#ifndef DELIVERY_H_
#define DELIVERY_H_
#include<iostream>
#include<vector>
#include<Pizza.h>
#include<Receiver.h>

class Delivery {

private:
	vector<Receiver> receivers;
	double price;
	vector<Pizza> pizzas;

public:
	Delivery(vector<Receiver>&,double,vector<Pizza>&);
	virtual ~Delivery();
	const vector<Pizza>& getPizzas() const;
	void setPizzas(const vector<Pizza>& pizzas);
	double getPrice() const;
	void setPrice(double price);
	const vector<Receiver>& getReceivers() const;
	void setReceivers(const vector<Receiver>& receivers);
};

#endif /* DELIVERY_H_ */

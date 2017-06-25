/*
 * Payment.h
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#ifndef PAYMENT_H_
#define PAYMENT_H_
#include<iostream>
using namespace std;

class Payment{
private:
	string date;
	double price;
public:
	Payment(string,double);
	void print();
	virtual ~Payment();
	const string& getDate() const;
	void setDate(const string& date);
	double getPrice() const;
	void setPrice(double price);
};

#endif /* PAYMENT_H_ */

/*
 * Product.h
 *
 *  Created on: May 31, 2017
 *      Author: LyBo-Pc
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include<string>
#include<iostream>
using namespace std;

class Product {
	string name;
	string marka;
	string model;

	int quantity;
	double price;

public:
	void print();
	double getOborot();
	virtual ~Product();
	const string& getMarka() const;
	void setMarka(const string& marka);
	const string& getModel() const;
	void setModel(const string& model);
	const string& getName() const;
	void setName(const string& name);
	double getPrice() const;
	void setPrice(double price);
	int getQuantity() const;
	void setQuantity(int quantity);
};

#endif /* PRODUCT_H_ */

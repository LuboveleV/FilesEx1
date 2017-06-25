/*
 * Product.h
 *
 *  Created on: May 29, 2017
 *      Author: LyBo-Pc
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include<iostream>
using namespace std;

class Product {
private:
	    string name;
		string marka;
		string model;
		int soldCounter;
		double price;
public:
    Product();
    Product(const string&,const string&,const string&,int =0,double =0.0);
    void printInfo();
	virtual ~Product();
	const string& getMarka() const;
	void setMarka(const string& marka);
	const string& getModel() const;
	void setModel(const string& model);
	const string& getName() const;
	void setName(const string& name);
	double getPrice() const;
	void setPrice(double price);
	int getSoldCounter() const;
	void setSoldCounter(int soldCounter);
};

#endif /* PRODUCT_H_ */

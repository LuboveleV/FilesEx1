/*
 * Firm.h
 *
 *  Created on: May 29, 2017
 *      Author: LyBo-Pc
 */

#ifndef FIRM_H_
#define FIRM_H_
#include<iostream>
#include"Product.h"
#include<vector>


class Firm {

private:
	vector<Product*> storeOne;
	vector<Product*> storeTwo;
	vector<Product*> storeThree;
	vector<Product*> FirmOfStores;
	double oborot;
public:
	//const Product&operator=(const Product &);
	Firm(vector<Product*>&,vector<Product*>&,vector<Product*>&);
	void storeWithLowOborot();
	void storeWithHighOborot();
	double oborotStore(vector<Product*>&);
    Product& bestArticul();
	void information(vector<Product*>&);
	virtual ~Firm();
	double getOborot() const;
	void setOborot(double oborot);
};

#endif /* FIRM_H_ */

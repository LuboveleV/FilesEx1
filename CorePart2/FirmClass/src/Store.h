/*
 * Store.h
 *
 *  Created on: May 31, 2017
 *      Author: LyBo-Pc
 */

#ifndef STORE_H_
#define STORE_H_
#include<vector>
#include"Product.h"
#include"pugixml.hpp"
#include<iostream>
#include<map>
using namespace std;

class Store {
private:
	vector<Product> products;

public:
	double printMyOborot();
	void printOborot(map<string,double>);
	map<string,double> getOborot();
	void traverseFiles(const string&);
	void print();
	Store();
	virtual ~Store();
};

#endif /* STORE_H_ */

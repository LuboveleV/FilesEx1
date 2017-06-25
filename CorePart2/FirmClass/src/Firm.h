/*
 * Firm.h
 *
 *  Created on: May 31, 2017
 *      Author: LyBo-Pc
 */

#ifndef FIRM_H_
#define FIRM_H_
#include<vector>
#include<iostream>
#include"Product.h"
#include"Store.h"
using namespace std;

class Firm {
private:
	vector<Store> firm;
public:
	void addingStore(Store);
	void dailyOborot();
	void dailyOborotOnStore();
	void storeWithLowOborot();
	void storeWithHighOborot();
	void bestArticulOborot();
	void bestArticulSells();
	string searchArticul(string);
	Firm();
	virtual ~Firm();
};

#endif /* FIRM_H_ */

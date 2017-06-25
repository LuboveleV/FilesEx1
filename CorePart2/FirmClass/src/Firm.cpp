/*
 * Firm.cpp
 *
 *  Created on: May 31, 2017
 *      Author: LyBo-Pc
 */

#include "Firm.h"

Firm::Firm() {
	// TODO Auto-generated constructor stub

}

Firm::~Firm() {
	// TODO Auto-generated destructor stub
}

void Firm::dailyOborot() {
	double result;
	for(int i =0;i<firm.size();i++){
		result+=firm[i].printMyOborot();
	}
	cout<<result;
}

void Firm::addingStore(Store someStore) {
	firm.push_back(someStore);
}

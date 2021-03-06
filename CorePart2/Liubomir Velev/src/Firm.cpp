/*
 * Firm.cpp
 *
 *  Created on: May 29, 2017
 *      Author: LyBo-Pc
 */

#include "Firm.h"


void Firm::storeWithHighOborot() {

	for(unsigned int i=0;i<storeOne.size();i++)
		{
			if(oborotStore(storeOne)<oborotStore(storeTwo) && oborotStore(storeOne)<oborotStore(storeThree))
			{
					information(storeOne);
			}
			else if(oborotStore(storeTwo)<oborotStore(storeOne)&& oborotStore(storeTwo)<oborotStore(storeThree))
			{
				information(storeTwo);
			}
			else{
				information(storeThree);
			}
		}
}

double Firm::getOborot() const {
	return oborot;
}

Firm::Firm(vector<Product*>& storeOne, vector<Product*>& storeTwo,
		vector<Product*>& storeThree)
:storeOne(storeOne),storeTwo(storeTwo),storeThree(storeThree)
{
	setOborot(0);
}

void Firm::storeWithLowOborot() {

	for(unsigned int i=0;i<storeOne.size();i++)
	{
		if(oborotStore(storeOne)>oborotStore(storeTwo)&& oborotStore(storeOne)>oborotStore(storeTwo)){
				information(storeOne);
			}
		else if(oborotStore(storeTwo)>oborotStore(storeOne)&& oborotStore(storeTwo)>oborotStore(storeThree)){
			information(storeTwo);
		}
		else{
			information(storeThree);
		}

	}

}

void Firm::information(vector<Product*>& example) {

	for(unsigned int i=0;i<example.size();i++)
		{
			example.at(i)->printInfo();
			cout<<"----------------------------"<<endl;
		}
}

double Firm::oborotStore(vector<Product*>& store) {
	double daylyOborot =0;

			for(unsigned int i =0;i<store.size();i++){
				daylyOborot+=store.at(i)->getPrice()*store.at(i)->getSoldCounter();
			}
			return daylyOborot;

}

Product& Firm::bestArticul() {
	 Product* best = new Product;
	for(unsigned int i=0;i<storeOne.size();i++)
	{

		if(storeOne.at(i)->getSoldCounter + storeTwo.at(i)->getSoldCounter + storeThree.at(i)->getSoldCounter   >  best->getSoldCounter){
		Product* best = new Product(storeOne.at(i)->getMarka,storeOne.at(i)->getModel,storeOne.at(i)->getName,storeOne.at(i)->getPrice,
					storeOne.at(i)->getSoldCounter + storeTwo.at(i)->getSoldCounter + storeThree.at(i)->getSoldCounter);
		}
	}
	return best;
}



void Firm::setOborot(double oborot) {

	for(unsigned int i =0;i<storeOne.size();i++){
			oborot+=(storeOne.at(i)->getPrice()*storeOne.at(i)->getSoldCounter())+
					(storeTwo.at(i)->getPrice()*storeTwo.at(i)->getSoldCounter())+
					(storeThree.at(i)->getPrice()*storeThree.at(i)->getSoldCounter());
		}
}

Firm::~Firm() {
	// TODO Auto-generated destructor stub
}


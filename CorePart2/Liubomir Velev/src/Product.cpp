/*
 * Product.cpp
 *
 *  Created on: May 29, 2017
 *      Author: LyBo-Pc
 */

#include "Product.h"

const string& Product::getMarka() const {
	return marka;
}

void Product::setMarka(const string& marka) {
	this->marka = marka;
}

const string& Product::getModel() const {
	return model;
}

void Product::setModel(const string& model) {
	this->model = model;
}

const string& Product::getName() const {
	return name;
}

void Product::setName(const string& name) {
	this->name = name;
}

double Product::getPrice() const {
	return price;
}

void Product::setPrice(double price) {
	this->price = price;
}

int Product::getSoldCounter() const {
	return soldCounter;
}

Product::Product(const string& name,const string& marka,const string& model,
		int soldCounter, double price)
:name(name),marka(marka),model(model)
{
	setSoldCounter(soldCounter);
	setPrice(price);
}

void Product::setSoldCounter(int soldCounter) {
	this->soldCounter = soldCounter;
}

Product::~Product() {
	// TODO Auto-generated destructor stub
}

void Product::printInfo() {

	cout<<"Name :"<<this->getName()<<endl<<
		  "Marka :"<<this->getMarka()<<endl<<
		  "Model :"<<this->getModel()<<endl<<
		  "Sold :"<<this->getSoldCounter()<<endl<<
		  "Price :"<<this->getPrice();

}

Product::Product() {
	this->marka="";
	this->model="";
	this->name="";
	this->price=0;
	this->soldCounter=0;
}

/*
 * Product.cpp
 *
 *  Created on: May 31, 2017
 *      Author: LyBo-Pc
 */

#include "Product.h"

Product::~Product() {
	// TODO Auto-generated destructor stub
}

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

int Product::getQuantity() const {
	return quantity;
}

void Product::setQuantity(int quantity) {
	this->quantity = quantity;
}

void Product::print() {
	cout<<"Name :"<<getName()<<endl
	    <<"Model :"<<getModel()<<endl
		<<"Marka :"<<getMarka()<<endl
		<<"Quantity : "<<getQuantity()<<endl
		<<"Price : "<<getPrice()<<endl;
}

double Product::getOborot() {
	return getPrice()*getQuantity();
}

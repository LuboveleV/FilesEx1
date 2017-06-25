/*
 * Items.cpp
 *
 *  Created on: Jun 13, 2017
 *      Author: LyBo-Pc
 */

#include "Items.h"

Items::Items() {
	setId(0);
	setName("");
	setPrice(0);
	setQuantity(0);
}

int Items::getId() const {
	return id;
}

void Items::setId(int id) {
	this->id = id;
}

const string& Items::getName() const {
	return name;
}

void Items::setName(const string& name) {
	this->name = name;
}

double Items::getPrice() const {
	return price;
}

void Items::setPrice(double price) {
	this->price = price;
}

int Items::getQuantity() const {
	return quantity;
}

void Items::setQuantity(int quantity) {
	this->quantity = quantity;
}

Items::Items(int id, string name, double price, int quantity) {
	setId(id);
	setName(name);
	setPrice(price);
	setQuantity(quantity);
}

Items::~Items() {
	// TODO Auto-generated destructor stub
}


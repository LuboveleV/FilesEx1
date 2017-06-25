/*
 * Package.cpp
 *
 *  Created on: May 2, 2017
 *      Author: LyBo-Pc
 */

#include "Package.h"


double Package::getCost() const {
	return cost;
}

void Package::setCost(double cost) {
	this->cost = cost;
}

double Package::getWeight() const {
	return weight;
}

void Package::setWeight(double weight) {
	this->weight = weight;
}

Package::Package(double weight, double cost, Client& sender, Client& receiver)
:sender(sender),receiver(receiver)
{
	setWeight(weight);
	setCost(cost);
}

Package::~Package() {
	// TODO Auto-generated destructor stub
}


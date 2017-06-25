/*
 * Video.cpp
 *
 *  Created on: May 18, 2017
 *      Author: LyBo-Pc
 */

#include "Video.h"

Video::Video() {
	this->name="";
	this->janre = COMEDY;

}

Video::Video(string name, Janr janre) {
	this->name=name;
	this->janre=janre;

}

const string& Video::getName() const {
	return name;
}

Janr Video::getJanre() const {
	return janre;
}

void Video::setJanre(Janr janre) {
	this->janre = janre;
}

void Video::setName(const string& name) {
	this->name = name;
}


Video::~Video() {
	// TODO Auto-generated destructor stub
}


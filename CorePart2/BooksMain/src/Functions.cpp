/*
 * Functions.cpp
 *
 *  Created on: May 23, 2017
 *      Author: LyBo-Pc
 */

#include "Functions.h"

void Functions::AddBook(Book& someBook,vector<Book*>& smth) {

	smth.push_back(&someBook);
}

void Functions::print() {

}

bool Functions::searchBook(const Book&) {
}

Functions::~Functions() {
	// TODO Auto-generated destructor stub
}


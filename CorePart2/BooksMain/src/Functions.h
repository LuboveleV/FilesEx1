/*
 * Functions.h
 *
 *  Created on: May 23, 2017
 *      Author: LyBo-Pc
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
#include"Book.h"
#include<iostream>
#include<vector>
using namespace std;


class Functions {
//private:
	vector<Book*> books;
public:
	void AddBook(Book&,vector<Book*>&);
	void print();
	bool searchBook(const Book&);
	virtual ~Functions();
};

#endif /* FUNCTIONS_H_ */

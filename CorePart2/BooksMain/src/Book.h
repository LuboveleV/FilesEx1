/*
 * Book.h
 *
 *  Created on: May 23, 2017
 *      Author: LyBo-Pc
 */

#ifndef BOOK_H_
#define BOOK_H_
#include<string>
#include<iostream>
using namespace std;


class Book {
private:
	int id;
    string author;
    string title;
    string genr;
    double price;
    string publishDate;
public:
	Book(const string&,const string&,const string&,const string&,int = 0,double = 0.0);
	virtual ~Book();
	const string& getAuthor() const;
	void setAuthor(const string& autor);
	double getPrice() const;
	void setPrice(double price);
	const string& getPublishDate() const;
	void setPublishDate(const string& publishDate);
	const string& getTitle() const;
	void setTitle(const string& title);
	int getId() const;
	void setId(int id);
	const string& getGenr() const;
	void setGenr(const string& genr);
};

#endif /* BOOK_H_ */

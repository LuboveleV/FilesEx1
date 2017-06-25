/*
 * Book.cpp
 *
 *  Created on: May 23, 2017
 *      Author: LyBo-Pc
 */

#include "Book.h"

const string& Book::getAuthor() const {
	return author;
}

void Book::setAuthor(const string& author) {
	this->author = author;
}


double Book::getPrice() const {
	return price;
}

void Book::setPrice(double price) {
	this->price = (price<0)? 0.0: price;
}

const string& Book::getPublishDate() const {
	return publishDate;
}

void Book::setPublishDate(const string& publishDate) {
	this->publishDate = publishDate;
}

const string& Book::getTitle() const {
	return title;
}

Book::Book(const string& author,const string& title,const string& genre,const string& publishDate,int id,double price)
:author(author),title(title),genr(genre),publishDate(publishDate)
{
	setId(id);
	setPrice(price);
}

int Book::getId() const {
	return id;
}

const string& Book::getGenr() const {
	return genr;
}

void Book::setGenr(const string& genr) {
	this->genr = genr;
}

void Book::setId(int id) {
	this->id = id;
}

void Book::setTitle(const string& title) {
	this->title = title;
}

Book::~Book() {
	// TODO Auto-generated destructor stub
}


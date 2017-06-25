/*
 * Cards.h
 *
 *  Created on: May 31, 2017
 *      Author: LyBo-Pc
 */

#ifndef CARDS_H_
#define CARDS_H_
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

struct Card{
	char* face;
	char* suit;
};
class Cards {
private:
	Card deck[52];
public:
	Cards();
	void shuffle();
	void deal();
	virtual ~Cards();
};

#endif /* CARDS_H_ */

/*
 * Hall.h
 *
 *  Created on: Jun 5, 2017
 *      Author: LyBo-Pc
 */

#ifndef HALL_H_
#define HALL_H_
#include<iostream>
#include<vector>
#include"Game.h"
#include"pugixml.hpp"
#include<map>
#include<iterator>
using namespace std;

class Hall {
private:
	vector<Game> halls;
public:
	Hall();
	map<string,int> nameToCounter();
	map<string,int> profitPerGame();
	void printGamesInHall();
	void traverseFile(const string&);
	double hallProfit();
	virtual ~Hall();
};

#endif /* HALL_H_ */

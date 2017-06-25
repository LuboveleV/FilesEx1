/*
 * Casino.h
 *
 *  Created on: Jun 5, 2017
 *      Author: LyBo-Pc
 */

#ifndef CASINO_H_
#define CASINO_H_
#include<vector>
#include<map>
#include"Game.h"
#include"Hall.h"
using namespace std;


class Casino {
private:
	vector<Hall> casino;
public:
	int enterChoice();
	void printMap(map<string,int>);
	void printCasino();
	map<string,int> nameToCounter();
	map<string,int> lessPlayedGame();
	map<string,int> mostPlayedGame();
	map<string,int> mostProfitableGame();
	//void searchByName();
//	map<string,int> threeMostPlayedGames();
//	map<string,int> fiveMostProfitGames();
	void addHall(Hall);
    double casinoProfit();
	Casino();
	virtual ~Casino();
};

#endif /* CASINO_H_ */

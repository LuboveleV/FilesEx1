/*
 * Game.h
 *
 *  Created on: Jun 5, 2017
 *      Author: LyBo-Pc
 */

#ifndef GAME_H_
#define GAME_H_
#include<iostream>
#include<string>
using namespace std;

class Game {
private:
	int id;
	string name;
	int level;
	int startCredit;
	int endCredit;
public:
	int gameProfit();
	void printGame();
	Game(int = 0,string = "" ,int = 0 ,int = 0 ,int = 0);
	virtual ~Game();
	int getEndCredit() const;
	void setEndCredit(int endCredit);
	int getId() const;
	void setId(int id);
	int getLevel() const;
	void setLevel(int level);
	const string& getName() const;
	void setName(const string& name);
	int getStartCredit() const;
	void setStartCredit(int startCredit);
};

#endif /* GAME_H_ */

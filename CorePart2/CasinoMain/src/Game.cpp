/*
 * Game.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: LyBo-Pc
 */

#include "Game.h"

int Game::getEndCredit() const {
	return endCredit;
}

void Game::setEndCredit(int endCredit) {
	this->endCredit = endCredit;
}

int Game::getId() const {
	return id;
}

void Game::setId(int id) {
	this->id = id;
}

int Game::getLevel() const {
	return level;
}

void Game::setLevel(int level) {
	this->level = level;
}

const string& Game::getName() const {
	return name;
}

void Game::setName(const string& name) {
	this->name = name;
}

int Game::getStartCredit() const {
	return startCredit;
}

int Game::gameProfit() {
	return getStartCredit() - getEndCredit();
}

void Game::setStartCredit(int startCredit) {
	this->startCredit = startCredit;
}

Game::Game(int id, string name, int level, int startCredit, int endCredit)
:id(id),name(name),level(level),startCredit(startCredit),endCredit(endCredit){
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

void Game::printGame() {
	cout<<"Game id: "<<getId()<<"  Name: "<<getName()<<"   Level:"<<getLevel()<<" startCradit:"<<getStartCredit()<<"  EndCredit: "<<getEndCredit()<<endl;
}

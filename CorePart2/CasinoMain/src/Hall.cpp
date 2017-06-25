/*
 * Hall.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: LyBo-Pc
 */

#include "Hall.h"

Hall::Hall() {
	// TODO Auto-generated constructor stub

}

void Hall::traverseFile(const string& xmlName) {

	pugi::xml_document doc;
		pugi::xml_parse_result result = doc.load_file(xmlName.data());


	    pugi::xml_node hall = doc.first_child();

	    Game someGame;
	    for(pugi::xml_node game = hall.child("game");game;game = game.next_sibling("game")){
	    	someGame.setId(game.child("id").text().as_int());
	    	someGame.setName(game.child("name").text().as_string());
	    	someGame.setLevel(game.child("level").text().as_int());
	    	someGame.setStartCredit(game.child("startCredit").text().as_int());
	    	someGame.setEndCredit(game.child("endCredit").text().as_int());
	    	halls.push_back(someGame);
	    }
}

void Hall::printGamesInHall() {
	for( int i = 0 ; i < halls.size();i++)
	{
		halls[i].printGame();
	}
}

double Hall::hallProfit() {
	double result;
	for(int i = 0 ; i < halls.size();++i)
	{
		result+=halls[i].gameProfit();
	}
	return result;
}

Hall::~Hall() {
	// TODO Auto-generated destructor stub
}

map<string, int> Hall::profitPerGame() {
	map<string,int> result;
	for(vector<Game>::iterator it = halls.begin();it!=halls.end();++it)
	{
		if(result.find(it->getName()) == result.end())
		{
			result.insert(map<string,int>::value_type(it->getName(),it->gameProfit()));
		}
		else
		{
			result[it->getName()] = it->gameProfit();

		}
	}
	return result;
}

map<string, int> Hall::nameToCounter() {
	map<string,int> result;
	int counter=0;
	for(vector<Game>::iterator it = halls.begin();it!=halls.end();++it)
	{
		if(result.find(it->getName()) == result.end())
		{
			result.insert(map<string,int>::value_type(it->getName(),counter));
		}
		else
		{
			result[it->getName()] = counter++;
		}
	}
	return result;
}

/*
 * Casino.cpp
 *
 *  Created on: Jun 5, 2017
 *      Author: LyBo-Pc
 */

#include "Casino.h"

void Casino::addHall(Hall hall) {
	casino.push_back(hall);
}

double Casino::casinoProfit() {
	double result;
	for(int i =0;i<casino.size();i++){
		result+=casino[i].hallProfit();
	}
}

map<string, int> Casino::lessPlayedGame() {
	map<string,int> res = nameToCounter();
    map<string,int> best;
	string bestName = res.begin()->first;
	int bestCounter = res.begin()->second;

		for(map<string,int>::iterator it = res.begin();it!=res.end();it++)
		{
			string gameName = it->first;
			int gameCounter = it->second;

			if(gameCounter < bestCounter)
			{
				bestName = gameName;
				bestCounter = gameCounter;
			}

		}
		 best.insert(map<string,int>::value_type(bestName,bestCounter));
	return best;
}

map<string, int> Casino::mostPlayedGame() {
	map<string,int> res = nameToCounter();
	    map<string,int> best;
		string bestName = res.begin()->first;
		int bestCounter = res.begin()->second;

			for(map<string,int>::iterator it = res.begin();it!=res.end();it++)
			{
				string gameName = it->first;
				int gameCounter = it->second;

				if(gameCounter > bestCounter)
				{
					bestName = gameName;
					bestCounter = gameCounter;
				}

			}
			 best.insert(map<string,int>::value_type(bestName,bestCounter));
		return best;
}

map<string, int> Casino::mostProfitableGame() {
	map<string,int> res;
	string bestName="";
	int bestProfit=0;
	for(int i=0;i<(int)casino.size();i++)
	{
		map<string,int> perHall = casino[i].profitPerGame();
				for(map<string,int>::iterator it = perHall.begin();it!=perHall.end();++i)
				{
					string gameName = it->first;
					int gameProfit = it->second;

					if(gameProfit > bestProfit)
					{
						bestName = gameName;
						bestProfit = gameProfit;
					}
				}
	}
	res.insert(map<string,int>::value_type(bestName,bestProfit));
	return res;
}

/*void Casino::searchByName() {
	string name;
	cout<<"Enter name:";
	cin>>name;
	for(int i =0 ; i<casino.size();++i)
	{
	    for(vector<Game>::iterator it=casino.begin();it != casino.end();it++)
	    {
	    	if(name == it->getName()){
	    		cout<<it->getName()<< "  " << it->getLevel();
	    	}
	    	else
	    		cout<<"there isn`t such game";
	    }
	}
}*/

/*
map<string,int> Casino::threeMostPlayedGames() {
	map<string,int> best = nameToCounter();
	map<string,int> result;
     for(int i =0;i<casino.size();++i)
     {
    	 for(map<string,int>::iterator it=best.begin();it<3;++it)
    	 {

    	 }
     }
}
*/

/*vector<Game> Casino::fiveMostProfitGames() {
}*/

map<string, int> Casino::nameToCounter() {
	 map<string,int> res;
	 for(int i=0;i<casino.size();i++)
	 {
		 map<string,int> perHall = casino[i].nameToCounter();
		 for(map<string,int>::iterator it=perHall.begin();it!=perHall.end();++it)
		 {
			 if(perHall.find(it->first) == perHall.end()){
				 res.insert(map<string,int>::value_type(it->first,it->second));
			 }
			 else
			 {
				 res[it->first] = it->second;
			 }

		 }
	 }
	 return res;
}

int Casino::enterChoice() {

	cout<<"enter you choice"<<endl
        <<"1 - Profit hall 1"<<endl
		<<"2 - Profit hall 2"<<endl
		<<"3 - profit hall 3"<<endl
		<<"4 - Casino profit"<<endl
		<<"5 - less playable game in casino"<<endl
		<<"6 - most playable game in casino"<<endl
		<<"7 - most profitable game in casino"<<endl
		<<"8 - searching by name"<<endl
		<<"9 - three most played games"
		<<"10 - five most profit games in casino"<<endl;


	int choiceForMenu;
	cin>>choiceForMenu;
	return choiceForMenu;


}

void Casino::printMap(map<string,int> mapsadasd) {


	for(map<string,int>::iterator it = mapsadasd.begin();it == mapsadasd.end();++it){
		cout<<it->first<<" "<<it->second<<endl;

	}

}

void Casino::printCasino() {
	for(vector<Hall>::iterator it = casino.begin();it == casino.end();it++)
	{
		it->printGamesInHall();
	}
}

Casino::~Casino() {
	// TODO Auto-generated destructor stub
}


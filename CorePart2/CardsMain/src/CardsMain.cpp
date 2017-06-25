//============================================================================
// Name        : CardsMain.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include"Cards.h"
using namespace std;

int main() {
	Cards deckOfCards;

	deckOfCards.deal();
	deckOfCards.shuffle();
	cout<<"-------------------";
	deckOfCards.deal();

	return 0;
}

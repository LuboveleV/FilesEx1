//============================================================================
// Name        : Lecture2004.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SavingsAccount.h"
using namespace std;

int main() {

    SavingsAccount::modifyInterestRate(0.05);
	SavingsAccount mySavings(200);
	mySavings.calculateMonthlyInterest();
	cout<<"My savings will be:"<<mySavings.getBalance();

	 SavingsAccount::modifyInterestRate(0.5);
	 mySavings.calculateMonthlyInterest();
	 	cout<<"My savings will be:"<<mySavings.getBalance();
	return 0;
}

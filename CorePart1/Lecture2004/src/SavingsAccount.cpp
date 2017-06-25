/*
 * SavingsAccount.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#include "SavingsAccount.h"

double SavingsAccount::annualInterestRate = 0;


void SavingsAccount::calculateMonthlyInterest() {
	 savingsBalace+=getBalance()*annualInterestRate/12;
}

void SavingsAccount::modifyInterestRate(double rate) {
        annualInterestRate=rate;
}

SavingsAccount::SavingsAccount(double savings) {
	setBalance(savings);

}

void SavingsAccount::setBalance(double savingBalance) {
	 this->savingsBalace=savingBalance;
}

double SavingsAccount::getBalance() {
	return this->savingsBalace;
}

SavingsAccount::~SavingsAccount() {
	// TODO Auto-generated destructor stub
}


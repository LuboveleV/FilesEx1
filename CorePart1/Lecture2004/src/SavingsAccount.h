/*
 * SavingsAccount.h
 *
 *  Created on: Apr 20, 2017
 *      Author: LyBo-Pc
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

class SavingsAccount {

private:
	double savingsBalace;
	static double annualInterestRate;

public:
	void calculateMonthlyInterest();
	static void modifyInterestRate(double);

	void setBalance(double);
	double getBalance();
	SavingsAccount(double);
	virtual ~SavingsAccount();
};

#endif /* SAVINGSACCOUNT_H_ */

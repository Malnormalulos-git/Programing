#include "bank.h"

Bank::Bank(int mc, int md, int mm): minCreditRate(mc), minDepositRate(md), minMortgageRate(mm){ }

int Bank::getCreditRate(){
	return minCreditRate + rand()%9;
}

int Bank::getDepositRate(){
	return minDepositRate + rand()%9;
}

int Bank::getMortgageRate(){
	return minMortgageRate + rand()%9;
}

Bank::~Bank(){
//	cout << "Bank destructor" << endl;
}

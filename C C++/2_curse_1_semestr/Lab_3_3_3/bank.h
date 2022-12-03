#if !defined(BANK_H)
#define BANK_H
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

class Bank{
protected:
	int minCreditRate;
	int minDepositRate;
	int minMortgageRate;
public:
	Bank(int, int, int);
	int getCreditRate();
	int getDepositRate();
	int getMortgageRate();
	~Bank();
};
#endif

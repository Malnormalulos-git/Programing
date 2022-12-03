#if !defined(SERVICE_H)
#define SERVICE_H

#include <iostream>
#include "client.h"

using namespace std;

class AbstractService{
protected:
	string nameClient;
	int sumCredit;
	int sumDeposit;
	int sumMortgage;
	int rate;
	double incomeBank;
	double incomeClient;
public:
	virtual void getInfo() = 0;
	virtual ~AbstractService();
	void setInfo(Client *, int);
};
#endif


#if !defined(CLIENT_H)
#define CLIENT_H

#include <iostream>

using namespace std;

class AbstractService;

class Client{
	string name;
	int principalSumCredit;
	int principalSumDeposit;
	
	public:
	Client(string, int, int);
	
	string getName();
	int getPrincipalSumCredit();
	int getPrincipalSumDeposit();
	
	AbstractService * credit;
	AbstractService * deposit;
};
#endif
